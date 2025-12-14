#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)21206;
long long int var_2 = -7282600792122728260LL;
unsigned char var_3 = (unsigned char)112;
short var_4 = (short)-2652;
signed char var_7 = (signed char)-127;
_Bool var_8 = (_Bool)0;
int var_10 = 1443962445;
short var_11 = (short)-22393;
_Bool var_12 = (_Bool)1;
short var_16 = (short)27413;
int var_17 = 2053656276;
int var_19 = -2021899994;
int zero = 0;
unsigned char var_20 = (unsigned char)46;
signed char var_21 = (signed char)-111;
long long int var_22 = 1826719011293802121LL;
short var_23 = (short)-7751;
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
