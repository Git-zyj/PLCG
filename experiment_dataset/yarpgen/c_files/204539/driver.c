#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)33;
unsigned int var_4 = 2362950790U;
signed char var_7 = (signed char)66;
unsigned short var_8 = (unsigned short)33126;
unsigned int var_9 = 1279811764U;
unsigned short var_10 = (unsigned short)23188;
short var_12 = (short)6801;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)-21276;
unsigned char var_20 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
