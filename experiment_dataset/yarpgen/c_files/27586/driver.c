#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3611853959U;
unsigned short var_4 = (unsigned short)48361;
unsigned short var_5 = (unsigned short)43058;
unsigned long long int var_7 = 10521092178080619438ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)30;
_Bool var_12 = (_Bool)0;
int var_16 = 1216707358;
long long int var_17 = 7822789161783959837LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)1019;
unsigned short var_21 = (unsigned short)42739;
unsigned long long int var_22 = 9891996083496518209ULL;
unsigned char var_23 = (unsigned char)78;
long long int var_24 = 4832177856644503734LL;
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
