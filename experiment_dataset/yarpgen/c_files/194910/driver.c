#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned short var_1 = (unsigned short)26939;
unsigned int var_2 = 3120339057U;
int var_3 = 764098419;
unsigned short var_4 = (unsigned short)50799;
unsigned int var_5 = 1097378415U;
int var_7 = -2009214872;
short var_8 = (short)-601;
unsigned short var_9 = (unsigned short)59085;
signed char var_11 = (signed char)-34;
unsigned char var_14 = (unsigned char)159;
int var_15 = -1041197335;
int zero = 0;
long long int var_16 = -3613396891516339057LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)205;
signed char var_19 = (signed char)110;
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
