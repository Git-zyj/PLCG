#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1738632076;
int var_12 = 1121551729;
unsigned long long int var_15 = 3150466855724203079ULL;
int zero = 0;
short var_18 = (short)24855;
unsigned int var_19 = 2324085973U;
int var_20 = 1387539657;
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
