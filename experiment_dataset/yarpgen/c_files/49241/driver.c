#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 745179443U;
unsigned int var_11 = 2361422979U;
unsigned int var_12 = 2708284184U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14112792472617451942ULL;
int var_16 = 69602263;
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
