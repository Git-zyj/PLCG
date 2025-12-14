#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)1;
short var_8 = (short)6604;
int var_11 = 81945236;
int var_13 = 899439326;
unsigned char var_14 = (unsigned char)107;
unsigned short var_15 = (unsigned short)2449;
unsigned short var_16 = (unsigned short)48090;
int var_17 = -1502706215;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-16191;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
