#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3012460697U;
unsigned int var_8 = 862340607U;
unsigned int var_10 = 468310693U;
int zero = 0;
unsigned long long int var_16 = 3105502251723502980ULL;
unsigned long long int var_17 = 15724794472488412078ULL;
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
