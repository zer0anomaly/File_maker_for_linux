#include <stdio.h>

int main()
{	
	printf("Please, type the name for for the file...\n");
	char varone[100] = "";
	scanf("%49s",varone);

	FILE *fptr;
	fptr = fopen(varone, "w");
	fclose(fptr);
	return 0;
}