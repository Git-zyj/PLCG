#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1748594488;
long long int var_6 = -7843424938029935835LL;
int var_8 = 810355410;
unsigned int var_12 = 1799494340U;
int zero = 0;
int var_16 = 1312380890;
int var_17 = -830477451;
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
