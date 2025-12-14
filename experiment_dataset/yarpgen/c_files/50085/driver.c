#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13606;
unsigned int var_1 = 1525756236U;
int var_2 = 1641788959;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-21851;
short var_5 = (short)-22235;
long long int var_6 = 4597231671804347846LL;
unsigned int var_7 = 2398497350U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)956;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-94;
int zero = 0;
unsigned short var_12 = (unsigned short)17685;
int var_13 = -653752266;
signed char var_14 = (signed char)68;
unsigned short var_15 = (unsigned short)50422;
signed char var_16 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
