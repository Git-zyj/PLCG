#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1368447444;
unsigned char var_5 = (unsigned char)154;
unsigned int var_6 = 1561604145U;
unsigned char var_13 = (unsigned char)143;
unsigned long long int var_14 = 11615169727472434893ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
unsigned char var_17 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
