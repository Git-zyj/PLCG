#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)127;
long long int var_4 = 4464776100248835161LL;
int var_5 = -2138990772;
_Bool var_6 = (_Bool)1;
short var_7 = (short)23764;
long long int var_9 = -6627544078228849258LL;
int var_10 = -1756655748;
unsigned long long int var_12 = 6276617634578068646ULL;
short var_13 = (short)10543;
unsigned long long int var_16 = 16203281769363707860ULL;
unsigned int var_19 = 3210082399U;
int zero = 0;
long long int var_20 = -587806226154384919LL;
unsigned long long int var_21 = 5083915128981282147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
