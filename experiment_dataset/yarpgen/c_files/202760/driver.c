#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 648574173U;
short var_2 = (short)-12504;
unsigned long long int var_5 = 2259696930115209940ULL;
unsigned long long int var_7 = 7292804304149946811ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)44;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)48710;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
