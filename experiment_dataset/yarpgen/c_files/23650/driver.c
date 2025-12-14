#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 493685870U;
unsigned int var_10 = 1610676338U;
int zero = 0;
short var_15 = (short)-32141;
unsigned char var_16 = (unsigned char)58;
unsigned int var_17 = 1249591901U;
unsigned long long int var_18 = 6554048571859352052ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
