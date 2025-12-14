#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -147507107;
unsigned short var_8 = (unsigned short)48962;
long long int var_9 = 1920490787898496600LL;
int zero = 0;
unsigned short var_13 = (unsigned short)5537;
signed char var_14 = (signed char)42;
unsigned long long int var_15 = 18347694613310485645ULL;
unsigned short var_16 = (unsigned short)63530;
void init() {
}

void checksum() {
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
