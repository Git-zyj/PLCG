#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6184641947711192779LL;
unsigned long long int var_11 = 2608625399074423585ULL;
int zero = 0;
signed char var_14 = (signed char)-6;
int var_15 = 1637743968;
unsigned long long int var_16 = 10104832864962183956ULL;
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
