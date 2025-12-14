#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21892;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)132;
unsigned short var_12 = (unsigned short)16970;
unsigned int var_18 = 1059031289U;
int zero = 0;
short var_20 = (short)18419;
short var_21 = (short)-9537;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)10153;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
