#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)12729;
signed char var_4 = (signed char)84;
unsigned short var_5 = (unsigned short)29365;
unsigned long long int var_6 = 17620775894691643610ULL;
signed char var_7 = (signed char)11;
unsigned char var_9 = (unsigned char)38;
unsigned long long int var_10 = 11231203834867382065ULL;
unsigned int var_11 = 482577465U;
long long int var_12 = -9003865468274445223LL;
int zero = 0;
unsigned short var_13 = (unsigned short)22575;
unsigned char var_14 = (unsigned char)10;
unsigned char var_15 = (unsigned char)157;
unsigned long long int var_16 = 7459317554839371297ULL;
void init() {
}

void checksum() {
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
