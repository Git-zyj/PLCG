#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 88024211;
unsigned long long int var_3 = 14984366709614414765ULL;
unsigned int var_5 = 3498032399U;
int var_7 = 1882246866;
unsigned long long int var_8 = 11520621358831839971ULL;
int zero = 0;
unsigned long long int var_11 = 5319093307609900756ULL;
unsigned char var_12 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
