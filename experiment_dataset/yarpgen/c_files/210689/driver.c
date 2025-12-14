#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7410;
long long int var_1 = 6984533320447714132LL;
unsigned int var_2 = 1826777286U;
signed char var_3 = (signed char)23;
short var_5 = (short)2342;
unsigned short var_6 = (unsigned short)19768;
long long int var_9 = 3223885894002552310LL;
unsigned char var_11 = (unsigned char)64;
int zero = 0;
unsigned long long int var_13 = 9157954198245051104ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)67;
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
