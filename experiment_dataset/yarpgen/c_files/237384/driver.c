#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19734;
unsigned short var_1 = (unsigned short)12530;
unsigned short var_2 = (unsigned short)56141;
unsigned short var_3 = (unsigned short)1544;
unsigned short var_4 = (unsigned short)39006;
unsigned short var_5 = (unsigned short)45081;
unsigned short var_6 = (unsigned short)20287;
unsigned short var_7 = (unsigned short)10859;
unsigned short var_8 = (unsigned short)30649;
unsigned short var_11 = (unsigned short)50171;
unsigned short var_12 = (unsigned short)40648;
unsigned short var_13 = (unsigned short)23637;
unsigned short var_14 = (unsigned short)62053;
unsigned short var_15 = (unsigned short)1517;
unsigned short var_16 = (unsigned short)53554;
unsigned short var_17 = (unsigned short)40530;
unsigned short var_18 = (unsigned short)47602;
int zero = 0;
unsigned short var_19 = (unsigned short)2405;
unsigned short var_20 = (unsigned short)61459;
unsigned short var_21 = (unsigned short)39419;
unsigned short var_22 = (unsigned short)60283;
unsigned short var_23 = (unsigned short)18718;
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
