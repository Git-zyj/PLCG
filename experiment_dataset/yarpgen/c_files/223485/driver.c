#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2339118928U;
unsigned int var_7 = 1434319419U;
long long int var_10 = -4757391657667165843LL;
int zero = 0;
unsigned short var_12 = (unsigned short)26889;
int var_13 = 761254002;
unsigned int var_14 = 3431100300U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
