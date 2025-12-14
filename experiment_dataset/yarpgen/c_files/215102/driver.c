#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30758;
short var_4 = (short)-8522;
int var_5 = 1208034147;
unsigned int var_12 = 3102272986U;
long long int var_14 = -9189037273631371629LL;
unsigned int var_17 = 1435666266U;
int zero = 0;
unsigned int var_18 = 3091576185U;
int var_19 = 1205757949;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
