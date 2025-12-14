#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11381718150647684003ULL;
int var_4 = 1213818424;
unsigned short var_5 = (unsigned short)59529;
unsigned short var_6 = (unsigned short)63189;
long long int var_14 = 7449791764510398058LL;
int zero = 0;
long long int var_16 = -5528709228365262167LL;
int var_17 = -1756872344;
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
