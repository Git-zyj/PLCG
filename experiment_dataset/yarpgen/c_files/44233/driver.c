#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58781;
unsigned short var_6 = (unsigned short)6;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)176;
unsigned int var_14 = 4252496239U;
unsigned char var_15 = (unsigned char)40;
signed char var_17 = (signed char)-12;
unsigned short var_19 = (unsigned short)19800;
int zero = 0;
unsigned int var_20 = 2856218220U;
short var_21 = (short)-18137;
short var_22 = (short)-32051;
int var_23 = -2056815769;
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
