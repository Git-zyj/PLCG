#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6575;
unsigned long long int var_4 = 4992723108526611793ULL;
short var_6 = (short)4977;
unsigned short var_8 = (unsigned short)7471;
unsigned short var_10 = (unsigned short)1564;
unsigned char var_11 = (unsigned char)16;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-277;
unsigned char var_14 = (unsigned char)48;
unsigned short var_15 = (unsigned short)12682;
int zero = 0;
short var_16 = (short)28888;
unsigned char var_17 = (unsigned char)175;
unsigned char var_18 = (unsigned char)193;
unsigned char var_19 = (unsigned char)62;
unsigned short var_20 = (unsigned short)8378;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
