#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3035631543295451505ULL;
int var_7 = -1463442461;
long long int var_9 = -3661562368577798609LL;
long long int var_12 = -803208442751191606LL;
int zero = 0;
unsigned int var_13 = 1154817771U;
long long int var_14 = -6881351713635743155LL;
unsigned int var_15 = 817978244U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
