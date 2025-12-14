#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 18002314877185708006ULL;
long long int var_4 = -1754705226882580307LL;
unsigned int var_6 = 2711187657U;
unsigned long long int var_9 = 17678274816463715347ULL;
int zero = 0;
unsigned int var_10 = 2211995582U;
unsigned int var_11 = 1470929283U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
