#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 641812013;
signed char var_2 = (signed char)13;
short var_3 = (short)10451;
unsigned int var_4 = 1802060865U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)109;
unsigned short var_7 = (unsigned short)29134;
signed char var_10 = (signed char)-16;
long long int var_11 = -4359693789581519796LL;
unsigned char var_12 = (unsigned char)136;
short var_13 = (short)-24473;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)43846;
long long int var_18 = -2129298108337103427LL;
unsigned int var_19 = 149097065U;
unsigned short var_20 = (unsigned short)582;
unsigned int var_21 = 926056149U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
