#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)8;
unsigned char var_4 = (unsigned char)42;
unsigned short var_6 = (unsigned short)21893;
unsigned int var_8 = 806149943U;
long long int var_12 = -5532072614725949230LL;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)56829;
short var_17 = (short)-351;
signed char var_19 = (signed char)27;
int zero = 0;
long long int var_20 = 3581490585545363734LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)4544;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
