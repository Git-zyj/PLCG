#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1500171605892488513LL;
unsigned short var_1 = (unsigned short)14043;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-26300;
short var_10 = (short)18175;
long long int var_11 = 2613368890360644105LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1085181559U;
int zero = 0;
short var_16 = (short)14467;
unsigned char var_17 = (unsigned char)254;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
