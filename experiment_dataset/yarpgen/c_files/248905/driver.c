#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 670034909U;
short var_2 = (short)-7213;
signed char var_3 = (signed char)-64;
signed char var_5 = (signed char)42;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
short var_12 = (short)27932;
int var_13 = 268933303;
unsigned long long int var_14 = 12703610964800195990ULL;
long long int var_15 = -6286062380743357989LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
