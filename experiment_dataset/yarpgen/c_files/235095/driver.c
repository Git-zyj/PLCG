#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15376;
_Bool var_6 = (_Bool)1;
short var_8 = (short)21832;
signed char var_12 = (signed char)84;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)34333;
int zero = 0;
signed char var_16 = (signed char)119;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)29;
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
