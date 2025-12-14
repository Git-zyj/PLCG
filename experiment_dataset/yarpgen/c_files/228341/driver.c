#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
short var_2 = (short)-10429;
signed char var_3 = (signed char)-50;
unsigned short var_5 = (unsigned short)2943;
unsigned char var_7 = (unsigned char)46;
unsigned int var_8 = 347656710U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)21880;
unsigned int var_14 = 3622990295U;
short var_15 = (short)-1158;
signed char var_16 = (signed char)32;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)60186;
unsigned int var_20 = 2718021538U;
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
