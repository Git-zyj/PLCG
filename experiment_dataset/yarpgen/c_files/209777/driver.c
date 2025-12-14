#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned int var_6 = 1298131288U;
unsigned int var_11 = 2158248235U;
unsigned short var_12 = (unsigned short)3077;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2624171849U;
void init() {
}

void checksum() {
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
