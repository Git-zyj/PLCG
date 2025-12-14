#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_6 = 3528665252135719659LL;
unsigned int var_13 = 3579738783U;
int zero = 0;
unsigned short var_14 = (unsigned short)8675;
unsigned long long int var_15 = 9434007588490154549ULL;
unsigned int var_16 = 2891152353U;
long long int var_17 = -4757741619894365019LL;
short var_18 = (short)-21936;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
