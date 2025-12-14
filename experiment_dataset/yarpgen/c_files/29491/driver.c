#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1148;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)3;
int var_11 = -881963633;
short var_12 = (short)-11346;
short var_14 = (short)-14175;
unsigned char var_15 = (unsigned char)95;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
unsigned short var_17 = (unsigned short)50535;
unsigned char var_18 = (unsigned char)185;
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
