#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1894;
short var_2 = (short)-2681;
unsigned int var_3 = 2378094473U;
short var_5 = (short)-20716;
short var_6 = (short)21760;
unsigned long long int var_8 = 6242504897758839478ULL;
short var_9 = (short)-20983;
unsigned int var_10 = 3727927747U;
unsigned int var_11 = 796010521U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)4021;
int zero = 0;
short var_14 = (short)-16099;
short var_15 = (short)29220;
unsigned int var_16 = 3086593890U;
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
