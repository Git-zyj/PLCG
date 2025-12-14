#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1106036720;
signed char var_6 = (signed char)78;
int var_7 = -2012806064;
short var_8 = (short)-15126;
long long int var_10 = 2118191769208598263LL;
int var_11 = 1864834679;
unsigned short var_12 = (unsigned short)13610;
unsigned short var_13 = (unsigned short)37438;
int var_14 = 1010252377;
unsigned short var_15 = (unsigned short)9328;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
unsigned short var_17 = (unsigned short)5650;
int var_18 = 89414379;
signed char var_19 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
