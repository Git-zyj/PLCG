#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1595378600;
int var_3 = 859121299;
unsigned long long int var_8 = 13648664505725446123ULL;
int zero = 0;
unsigned long long int var_12 = 8233825107400609807ULL;
unsigned long long int var_13 = 1319059669664114518ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
