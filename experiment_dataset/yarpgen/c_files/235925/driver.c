#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1686942235U;
short var_8 = (short)9074;
unsigned int var_9 = 3939856884U;
int zero = 0;
unsigned long long int var_15 = 3502311632152136552ULL;
int var_16 = -762323259;
_Bool var_17 = (_Bool)1;
int var_18 = 926723657;
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
