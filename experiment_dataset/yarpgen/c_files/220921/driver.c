#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4099989787039104865LL;
short var_5 = (short)-7020;
unsigned int var_6 = 79783266U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12049604236597627114ULL;
int zero = 0;
short var_14 = (short)-26501;
signed char var_15 = (signed char)111;
short var_16 = (short)3053;
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
