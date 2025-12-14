#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6740328048924039012LL;
long long int var_2 = -937541866731868144LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)14705;
signed char var_6 = (signed char)49;
short var_8 = (short)8952;
unsigned long long int var_10 = 17556354924436671755ULL;
int zero = 0;
signed char var_12 = (signed char)-94;
unsigned long long int var_13 = 8941801806310506201ULL;
short var_14 = (short)-31960;
int var_15 = 1365556039;
long long int var_16 = 455838854678375309LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
