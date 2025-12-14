#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2791132008U;
unsigned long long int var_1 = 548768808753269406ULL;
int var_5 = 91309201;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)62034;
unsigned char var_13 = (unsigned char)234;
unsigned char var_14 = (unsigned char)170;
unsigned short var_17 = (unsigned short)54833;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
short var_21 = (short)30426;
unsigned char var_22 = (unsigned char)253;
unsigned short var_23 = (unsigned short)52550;
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
