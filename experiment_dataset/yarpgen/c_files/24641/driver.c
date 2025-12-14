#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-3671;
unsigned int var_15 = 3957168892U;
int zero = 0;
unsigned long long int var_20 = 11224690826880673569ULL;
unsigned int var_21 = 2015335879U;
unsigned char var_22 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
