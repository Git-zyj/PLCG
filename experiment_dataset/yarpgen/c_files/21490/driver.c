#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned long long int var_3 = 10693224846383628597ULL;
unsigned int var_4 = 1671679233U;
long long int var_5 = -3144855961716286618LL;
unsigned char var_6 = (unsigned char)68;
long long int var_8 = 5075627554360319500LL;
unsigned short var_9 = (unsigned short)15425;
int zero = 0;
unsigned int var_11 = 971085088U;
unsigned char var_12 = (unsigned char)253;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-14783;
unsigned short var_15 = (unsigned short)58950;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
