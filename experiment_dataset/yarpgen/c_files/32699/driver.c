#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)2;
short var_6 = (short)-32473;
short var_8 = (short)-5100;
int zero = 0;
int var_11 = -2110425471;
int var_12 = -2108845932;
unsigned char var_13 = (unsigned char)234;
short var_14 = (short)16421;
unsigned char var_15 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
