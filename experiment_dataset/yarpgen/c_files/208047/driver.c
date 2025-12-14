#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -59772943;
int var_8 = -354073535;
int var_9 = 1291983480;
int var_10 = -1333311198;
int var_12 = -1289515020;
int var_13 = -807022445;
int var_14 = 178745573;
int zero = 0;
int var_15 = 747805593;
int var_16 = -543095913;
int var_17 = -1526362446;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
