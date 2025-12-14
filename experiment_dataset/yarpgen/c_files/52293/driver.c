#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned int var_1 = 2506949694U;
unsigned char var_3 = (unsigned char)128;
signed char var_5 = (signed char)99;
unsigned short var_6 = (unsigned short)34440;
int var_7 = 698386881;
long long int var_8 = 3084595517517123085LL;
int var_9 = -1841257939;
unsigned short var_12 = (unsigned short)24338;
short var_13 = (short)-24712;
signed char var_14 = (signed char)81;
short var_16 = (short)-14144;
signed char var_17 = (signed char)-59;
int zero = 0;
unsigned char var_18 = (unsigned char)131;
signed char var_19 = (signed char)-118;
short var_20 = (short)4430;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)37471;
void init() {
}

void checksum() {
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
