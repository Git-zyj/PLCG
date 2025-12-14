#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -133481402;
unsigned int var_15 = 239013205U;
int var_17 = -491572909;
int zero = 0;
long long int var_18 = 6499929390904132649LL;
unsigned int var_19 = 3592188472U;
int var_20 = -1013915625;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
