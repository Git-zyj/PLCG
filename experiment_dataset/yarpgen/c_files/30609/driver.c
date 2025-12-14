#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 268608322U;
unsigned int var_5 = 98873357U;
unsigned int var_7 = 4037364428U;
unsigned int var_8 = 452501159U;
unsigned int var_9 = 2823735543U;
unsigned int var_10 = 3613183610U;
unsigned int var_11 = 1010972765U;
unsigned int var_12 = 1858570230U;
unsigned int var_13 = 2593156548U;
unsigned int var_14 = 2122963350U;
unsigned int var_17 = 3346710577U;
int zero = 0;
unsigned int var_18 = 2447337488U;
unsigned int var_19 = 2333266898U;
unsigned int var_20 = 1544241216U;
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
