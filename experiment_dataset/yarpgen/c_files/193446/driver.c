#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1871701333;
int var_1 = -338283736;
unsigned short var_2 = (unsigned short)45360;
unsigned int var_6 = 3097053286U;
signed char var_7 = (signed char)33;
unsigned int var_9 = 2945157393U;
short var_10 = (short)6203;
signed char var_11 = (signed char)-4;
unsigned int var_12 = 1628608039U;
short var_13 = (short)3785;
int zero = 0;
short var_15 = (short)-21235;
int var_16 = 370447984;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8049807678851051984ULL;
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
