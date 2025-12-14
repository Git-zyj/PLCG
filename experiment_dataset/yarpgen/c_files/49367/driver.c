#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10204505567947632058ULL;
unsigned long long int var_1 = 18054532716286419038ULL;
short var_2 = (short)-19995;
_Bool var_5 = (_Bool)0;
int var_6 = -673422721;
short var_7 = (short)27437;
unsigned short var_10 = (unsigned short)49315;
long long int var_11 = -2220140097523474400LL;
short var_12 = (short)21865;
signed char var_15 = (signed char)72;
unsigned short var_16 = (unsigned short)58873;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)23143;
long long int var_21 = -3487283713282462263LL;
signed char var_22 = (signed char)-97;
unsigned short var_23 = (unsigned short)57235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
