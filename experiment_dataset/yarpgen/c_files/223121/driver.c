#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -823820132;
unsigned int var_4 = 231155626U;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)179;
unsigned char var_10 = (unsigned char)26;
unsigned short var_12 = (unsigned short)13850;
int var_13 = 648716228;
unsigned short var_15 = (unsigned short)64825;
unsigned short var_16 = (unsigned short)28645;
int zero = 0;
unsigned short var_18 = (unsigned short)30744;
signed char var_19 = (signed char)15;
unsigned char var_20 = (unsigned char)191;
short var_21 = (short)-12338;
long long int var_22 = 5721539528251971979LL;
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
