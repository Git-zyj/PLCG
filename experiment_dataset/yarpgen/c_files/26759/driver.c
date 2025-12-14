#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2822639821U;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)7238;
unsigned int var_4 = 1451160692U;
short var_6 = (short)-30461;
unsigned char var_7 = (unsigned char)113;
unsigned short var_8 = (unsigned short)3974;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3665137621134349642LL;
int zero = 0;
unsigned short var_13 = (unsigned short)37014;
int var_14 = -2069390995;
short var_15 = (short)29868;
unsigned char var_16 = (unsigned char)152;
signed char var_17 = (signed char)-118;
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
