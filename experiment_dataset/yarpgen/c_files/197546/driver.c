#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56434;
unsigned char var_1 = (unsigned char)235;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = 886916646;
short var_6 = (short)-14726;
unsigned short var_7 = (unsigned short)1885;
unsigned char var_9 = (unsigned char)34;
unsigned char var_11 = (unsigned char)111;
unsigned char var_12 = (unsigned char)91;
int zero = 0;
unsigned short var_13 = (unsigned short)50639;
signed char var_14 = (signed char)-4;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)82;
unsigned long long int var_17 = 16222707545841488981ULL;
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
