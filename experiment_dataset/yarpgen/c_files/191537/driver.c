#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2612326;
long long int var_6 = -3483727280052086736LL;
unsigned int var_7 = 2361436265U;
short var_10 = (short)13216;
unsigned long long int var_12 = 12164601659862237160ULL;
int zero = 0;
short var_15 = (short)-7866;
unsigned int var_16 = 2113132244U;
short var_17 = (short)27732;
unsigned short var_18 = (unsigned short)45636;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
