#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6411937381620014235ULL;
unsigned short var_4 = (unsigned short)17263;
unsigned short var_8 = (unsigned short)34526;
long long int var_9 = -3823503509478365618LL;
long long int var_12 = 9120721218799955813LL;
int var_14 = 1748627007;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -682301249;
unsigned short var_17 = (unsigned short)37209;
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
