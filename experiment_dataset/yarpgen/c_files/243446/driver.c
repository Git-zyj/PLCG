#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16282;
int var_3 = 1355122913;
int var_5 = -61564422;
short var_7 = (short)-9028;
unsigned int var_8 = 2331962640U;
int var_9 = -2069268303;
int var_10 = 1628828233;
int zero = 0;
short var_12 = (short)22969;
short var_13 = (short)-22936;
signed char var_14 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
