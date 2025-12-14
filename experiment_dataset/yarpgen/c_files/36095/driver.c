#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1637120546;
unsigned int var_5 = 3473877900U;
int zero = 0;
unsigned long long int var_13 = 18272657797839435105ULL;
int var_14 = -1270757796;
unsigned int var_15 = 3908590252U;
unsigned int var_16 = 866249210U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
