#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17463794901990236416ULL;
unsigned long long int var_4 = 12857053901675169600ULL;
int var_8 = -484081938;
unsigned int var_10 = 4206933620U;
int var_11 = 2079255538;
int zero = 0;
unsigned char var_17 = (unsigned char)150;
int var_18 = 1847145241;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
