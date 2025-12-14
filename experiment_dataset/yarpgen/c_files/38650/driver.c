#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3806;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-70;
unsigned int var_5 = 2921215431U;
signed char var_6 = (signed char)-97;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)34;
short var_9 = (short)21640;
unsigned short var_10 = (unsigned short)34433;
long long int var_11 = -8666084779649467939LL;
unsigned long long int var_12 = 1010993388781784653ULL;
int var_13 = -1392136844;
unsigned char var_14 = (unsigned char)249;
unsigned short var_15 = (unsigned short)42711;
int zero = 0;
long long int var_16 = 8499416340712463126LL;
int var_17 = -1902551838;
unsigned int var_18 = 894518294U;
short var_19 = (short)-32435;
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
