#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4234;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1028545559U;
unsigned int var_4 = 1561530144U;
unsigned int var_5 = 1922937700U;
int var_7 = -1434913025;
unsigned int var_8 = 1598224370U;
int var_11 = -1266569349;
short var_12 = (short)-28045;
unsigned int var_14 = 1806249379U;
unsigned int var_16 = 2170311114U;
int zero = 0;
int var_17 = -2077180543;
unsigned short var_18 = (unsigned short)20390;
long long int var_19 = -2863987390525620615LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
