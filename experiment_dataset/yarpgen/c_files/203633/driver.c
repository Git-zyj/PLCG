#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9188614195357351360LL;
long long int var_10 = 4235230084820427217LL;
long long int var_13 = -6184830837012736915LL;
unsigned int var_14 = 2903958947U;
int zero = 0;
long long int var_15 = 1000580976644886327LL;
long long int var_16 = 5957654074643360984LL;
void init() {
}

void checksum() {
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
