#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6289161387029339961ULL;
long long int var_7 = 71541474275294757LL;
int var_8 = 1920002831;
int var_9 = 782289667;
unsigned int var_10 = 1733657803U;
int zero = 0;
long long int var_14 = 247072173077296059LL;
signed char var_15 = (signed char)-126;
unsigned long long int var_16 = 8113406261891151516ULL;
void init() {
}

void checksum() {
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
