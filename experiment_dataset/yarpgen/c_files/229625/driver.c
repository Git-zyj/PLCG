#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3862503398U;
unsigned short var_1 = (unsigned short)24571;
unsigned short var_2 = (unsigned short)20968;
unsigned short var_3 = (unsigned short)12549;
unsigned short var_5 = (unsigned short)52173;
signed char var_6 = (signed char)56;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 9228304573261257095ULL;
unsigned long long int var_12 = 365789136472056321ULL;
short var_13 = (short)630;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
