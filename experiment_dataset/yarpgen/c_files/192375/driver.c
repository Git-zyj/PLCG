#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2898232491746123156LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -7079988402754994050LL;
long long int var_3 = -8668197052934355766LL;
short var_5 = (short)15353;
unsigned int var_7 = 3482691355U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)30;
int zero = 0;
signed char var_14 = (signed char)114;
int var_15 = 927999028;
unsigned short var_16 = (unsigned short)19379;
unsigned int var_17 = 1197027950U;
void init() {
}

void checksum() {
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
