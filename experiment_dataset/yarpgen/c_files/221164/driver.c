#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)116;
long long int var_10 = -5687647441455080255LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)63916;
unsigned char var_17 = (unsigned char)137;
unsigned int var_18 = 780357367U;
int zero = 0;
unsigned short var_19 = (unsigned short)56830;
unsigned short var_20 = (unsigned short)35014;
short var_21 = (short)-18249;
unsigned short var_22 = (unsigned short)60644;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
