#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-47;
long long int var_6 = 2736135384776107632LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13421391790003714474ULL;
unsigned short var_12 = (unsigned short)29226;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
