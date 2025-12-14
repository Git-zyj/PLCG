#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2396888748U;
unsigned int var_3 = 743822235U;
unsigned int var_5 = 766059625U;
unsigned int var_7 = 3870534643U;
unsigned int var_8 = 724900000U;
long long int var_12 = -7314235140269569491LL;
int zero = 0;
unsigned int var_14 = 1505027286U;
unsigned int var_15 = 3695510344U;
unsigned int var_16 = 2217205012U;
long long int var_17 = -4505853000811907466LL;
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
