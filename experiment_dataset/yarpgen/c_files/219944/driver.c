#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2017137611U;
short var_10 = (short)11979;
unsigned int var_13 = 1412139338U;
int zero = 0;
unsigned long long int var_15 = 2846922639040251345ULL;
unsigned char var_16 = (unsigned char)32;
void init() {
}

void checksum() {
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
