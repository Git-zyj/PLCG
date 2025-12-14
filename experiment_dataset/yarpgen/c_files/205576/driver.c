#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5011088986521620202ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)93;
short var_11 = (short)-15739;
unsigned int var_12 = 1999212396U;
unsigned char var_16 = (unsigned char)115;
signed char var_19 = (signed char)(-127 - 1);
int zero = 0;
long long int var_20 = 6787071268157960223LL;
unsigned char var_21 = (unsigned char)43;
short var_22 = (short)32400;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-5023;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
