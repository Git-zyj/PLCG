#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23519;
long long int var_1 = -9049299478919495175LL;
short var_3 = (short)2562;
unsigned int var_4 = 1520054980U;
short var_7 = (short)-30431;
int zero = 0;
unsigned long long int var_11 = 608462166461975203ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
