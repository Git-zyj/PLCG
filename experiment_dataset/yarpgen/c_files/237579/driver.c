#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2299;
unsigned long long int var_1 = 13596836272295088114ULL;
unsigned long long int var_2 = 773466220368678307ULL;
unsigned int var_3 = 2570169711U;
unsigned char var_4 = (unsigned char)15;
unsigned short var_10 = (unsigned short)54917;
signed char var_11 = (signed char)48;
int zero = 0;
unsigned short var_12 = (unsigned short)17463;
short var_13 = (short)22018;
unsigned short var_14 = (unsigned short)24434;
unsigned int var_15 = 2093851844U;
int var_16 = 1410790535;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
