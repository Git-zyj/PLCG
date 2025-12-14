#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2056161048U;
unsigned long long int var_1 = 5814937151516541934ULL;
int var_2 = 929481266;
long long int var_7 = -4983693081366986045LL;
unsigned long long int var_8 = 3121407557217063329ULL;
int var_9 = 1627673778;
unsigned int var_10 = 1185003276U;
int zero = 0;
long long int var_14 = 2744215393562889875LL;
int var_15 = 1261182561;
void init() {
}

void checksum() {
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
