#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17725;
signed char var_10 = (signed char)94;
short var_12 = (short)-20200;
long long int var_14 = 52037051760015468LL;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
unsigned short var_17 = (unsigned short)35203;
unsigned short var_18 = (unsigned short)8651;
long long int var_19 = -2097610416880446687LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
