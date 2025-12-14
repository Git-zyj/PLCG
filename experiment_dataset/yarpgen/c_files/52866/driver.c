#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12966;
short var_4 = (short)24417;
unsigned short var_8 = (unsigned short)6332;
unsigned int var_11 = 737292833U;
unsigned short var_15 = (unsigned short)45674;
int zero = 0;
signed char var_16 = (signed char)63;
unsigned short var_17 = (unsigned short)2139;
unsigned short var_18 = (unsigned short)2849;
_Bool var_19 = (_Bool)1;
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
