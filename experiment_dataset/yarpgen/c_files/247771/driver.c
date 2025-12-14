#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2201029697U;
unsigned int var_8 = 3756116803U;
unsigned int var_10 = 2438176831U;
unsigned int var_11 = 3982636075U;
int zero = 0;
unsigned short var_15 = (unsigned short)9136;
unsigned int var_16 = 986127300U;
unsigned int var_17 = 3944918186U;
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
