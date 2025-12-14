#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26789;
short var_7 = (short)-16562;
unsigned long long int var_8 = 10068561551769867569ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)747;
short var_13 = (short)-18905;
int zero = 0;
long long int var_14 = 6733452266801520969LL;
unsigned char var_15 = (unsigned char)237;
long long int var_16 = 7684271937712701028LL;
unsigned long long int var_17 = 4332804174641307712ULL;
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
