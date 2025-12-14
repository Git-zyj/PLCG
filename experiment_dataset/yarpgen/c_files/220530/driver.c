#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2800332775U;
unsigned short var_1 = (unsigned short)36561;
unsigned short var_2 = (unsigned short)24379;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)156;
long long int var_8 = 3655231751111148267LL;
unsigned short var_14 = (unsigned short)58465;
short var_15 = (short)-4887;
unsigned char var_16 = (unsigned char)236;
unsigned short var_17 = (unsigned short)13938;
int zero = 0;
unsigned short var_19 = (unsigned short)33436;
short var_20 = (short)19994;
signed char var_21 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
