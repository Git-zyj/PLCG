#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21497;
unsigned char var_1 = (unsigned char)159;
unsigned short var_3 = (unsigned short)11197;
unsigned short var_4 = (unsigned short)775;
int var_6 = -1753055680;
unsigned char var_8 = (unsigned char)90;
unsigned short var_9 = (unsigned short)42216;
short var_10 = (short)-16162;
signed char var_11 = (signed char)-80;
unsigned short var_12 = (unsigned short)46881;
int zero = 0;
unsigned short var_16 = (unsigned short)54111;
unsigned long long int var_17 = 15113075570086299554ULL;
int var_18 = 1830650585;
signed char var_19 = (signed char)33;
short var_20 = (short)-22403;
unsigned char var_21 = (unsigned char)174;
unsigned short var_22 = (unsigned short)1298;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
