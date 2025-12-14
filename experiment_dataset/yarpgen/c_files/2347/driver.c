#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16979;
unsigned int var_1 = 1516369606U;
unsigned long long int var_2 = 6590229206812563929ULL;
unsigned int var_3 = 1294399953U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3304445889U;
signed char var_6 = (signed char)57;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)7921;
unsigned char var_9 = (unsigned char)162;
signed char var_10 = (signed char)-79;
int zero = 0;
unsigned long long int var_11 = 17957299078345446999ULL;
signed char var_12 = (signed char)-62;
short var_13 = (short)11818;
int var_14 = -1142710132;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
