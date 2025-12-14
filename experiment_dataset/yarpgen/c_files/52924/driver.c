#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_5 = -1263094045;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)122;
long long int var_15 = -5122157208925085260LL;
unsigned long long int var_16 = 8399743732424170647ULL;
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
