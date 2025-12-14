#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2228587748U;
short var_6 = (short)24503;
unsigned short var_10 = (unsigned short)8826;
unsigned int var_12 = 3411542518U;
int zero = 0;
long long int var_15 = 5144918758142873656LL;
unsigned short var_16 = (unsigned short)1050;
unsigned short var_17 = (unsigned short)8064;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
