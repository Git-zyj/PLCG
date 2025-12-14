#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65533;
unsigned char var_1 = (unsigned char)112;
short var_2 = (short)-7769;
signed char var_3 = (signed char)-60;
unsigned short var_4 = (unsigned short)45733;
signed char var_5 = (signed char)-78;
_Bool var_6 = (_Bool)1;
short var_8 = (short)29986;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-23500;
unsigned char var_12 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
