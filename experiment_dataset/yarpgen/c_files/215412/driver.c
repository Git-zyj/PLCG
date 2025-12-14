#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
int var_1 = 468022545;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)147;
unsigned char var_4 = (unsigned char)98;
unsigned short var_5 = (unsigned short)31892;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 897533467U;
unsigned char var_8 = (unsigned char)132;
unsigned char var_9 = (unsigned char)143;
short var_10 = (short)22413;
signed char var_11 = (signed char)-99;
int var_12 = 2059254283;
signed char var_13 = (signed char)-34;
long long int var_14 = 496004420579870507LL;
int var_15 = 2080363993;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)46722;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-5756;
_Bool var_20 = (_Bool)1;
int var_21 = -102221722;
signed char var_22 = (signed char)9;
int var_23 = 1828627328;
short var_24 = (short)-12072;
int var_25 = -1740790643;
signed char var_26 = (signed char)-16;
unsigned int var_27 = 1442326941U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
