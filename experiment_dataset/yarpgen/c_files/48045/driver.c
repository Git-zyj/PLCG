#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-45;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-113;
unsigned char var_6 = (unsigned char)21;
unsigned int var_9 = 2860641535U;
unsigned short var_10 = (unsigned short)42613;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
signed char var_15 = (signed char)107;
unsigned char var_16 = (unsigned char)67;
signed char var_17 = (signed char)19;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
