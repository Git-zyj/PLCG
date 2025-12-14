#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)36178;
short var_6 = (short)5847;
unsigned int var_10 = 1630302769U;
signed char var_12 = (signed char)-61;
unsigned char var_15 = (unsigned char)113;
signed char var_17 = (signed char)-20;
int zero = 0;
short var_20 = (short)11946;
unsigned int var_21 = 1500078451U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
