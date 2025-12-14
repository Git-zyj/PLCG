#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned int var_1 = 773029253U;
signed char var_3 = (signed char)124;
short var_4 = (short)-5046;
int var_5 = -1871675511;
signed char var_6 = (signed char)-82;
unsigned short var_7 = (unsigned short)55734;
int var_8 = 383736072;
unsigned short var_9 = (unsigned short)10008;
signed char var_10 = (signed char)70;
unsigned short var_11 = (unsigned short)16552;
unsigned short var_12 = (unsigned short)48888;
short var_13 = (short)22656;
int zero = 0;
signed char var_14 = (signed char)-20;
long long int var_15 = -2109286111005254636LL;
signed char var_16 = (signed char)-78;
int var_17 = -1723824144;
void init() {
}

void checksum() {
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
