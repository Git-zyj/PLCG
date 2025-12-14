#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1242351360;
int var_4 = 1767322293;
long long int var_9 = -2136753465720506600LL;
int zero = 0;
unsigned int var_20 = 1960484132U;
int var_21 = 790066342;
unsigned long long int var_22 = 10209417810375968083ULL;
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
