#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -697627889;
unsigned long long int var_5 = 10484293904799949636ULL;
int zero = 0;
int var_11 = -855574727;
int var_12 = 1791491866;
unsigned long long int var_13 = 12696450063720840745ULL;
unsigned long long int var_14 = 553298254082998860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
