#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3097381353U;
short var_3 = (short)-14575;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)65211;
unsigned char var_7 = (unsigned char)30;
unsigned short var_8 = (unsigned short)37210;
long long int var_10 = -1787193668667769498LL;
unsigned char var_11 = (unsigned char)156;
unsigned char var_12 = (unsigned char)22;
unsigned short var_13 = (unsigned short)8625;
signed char var_15 = (signed char)-39;
int zero = 0;
unsigned short var_16 = (unsigned short)38888;
short var_17 = (short)-17014;
unsigned short var_18 = (unsigned short)45708;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
