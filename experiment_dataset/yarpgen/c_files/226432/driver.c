#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1008461265;
int var_2 = 1122944158;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 12192100612222111808ULL;
int zero = 0;
long long int var_14 = 708614154496400944LL;
long long int var_15 = -1592288877536877033LL;
long long int var_16 = -2057640345322799996LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
