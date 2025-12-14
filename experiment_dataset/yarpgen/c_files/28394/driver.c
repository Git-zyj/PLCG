#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 958562862U;
unsigned int var_2 = 3247101149U;
long long int var_3 = -6750858922390158150LL;
long long int var_4 = -160865569327545172LL;
unsigned short var_6 = (unsigned short)60114;
short var_7 = (short)-5744;
signed char var_8 = (signed char)-29;
signed char var_9 = (signed char)121;
short var_10 = (short)1867;
unsigned int var_11 = 3788877856U;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
signed char var_18 = (signed char)-60;
signed char var_19 = (signed char)99;
unsigned int var_20 = 1071259907U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
