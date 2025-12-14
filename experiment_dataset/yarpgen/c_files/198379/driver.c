#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_1 = (short)15262;
unsigned int var_2 = 1170975977U;
unsigned short var_3 = (unsigned short)23540;
unsigned int var_4 = 824017535U;
unsigned char var_5 = (unsigned char)24;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)38276;
unsigned short var_9 = (unsigned short)64902;
unsigned int var_10 = 2030028914U;
short var_11 = (short)-648;
int var_12 = -817710473;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3979901032U;
unsigned char var_15 = (unsigned char)210;
signed char var_16 = (signed char)-72;
unsigned short var_17 = (unsigned short)16619;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
