#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)80;
unsigned short var_6 = (unsigned short)61457;
long long int var_8 = -2987184026262411378LL;
unsigned long long int var_10 = 15930024546510445623ULL;
unsigned int var_14 = 2474071659U;
int zero = 0;
unsigned int var_15 = 2609775990U;
short var_16 = (short)-22542;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1689167044U;
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
