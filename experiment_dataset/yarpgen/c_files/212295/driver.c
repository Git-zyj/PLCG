#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -421149320;
unsigned short var_3 = (unsigned short)27017;
unsigned int var_4 = 2634591597U;
unsigned short var_8 = (unsigned short)17222;
unsigned short var_12 = (unsigned short)30213;
unsigned short var_13 = (unsigned short)7899;
int zero = 0;
signed char var_16 = (signed char)59;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
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
