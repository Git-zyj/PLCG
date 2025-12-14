#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)913;
unsigned int var_7 = 2606114043U;
unsigned char var_8 = (unsigned char)46;
unsigned char var_12 = (unsigned char)67;
int zero = 0;
int var_15 = -1731174456;
unsigned short var_16 = (unsigned short)12770;
signed char var_17 = (signed char)19;
unsigned long long int var_18 = 2054272678324256944ULL;
int var_19 = -2049212912;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
