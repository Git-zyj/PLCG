#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-32729;
long long int var_5 = -3728424531848578312LL;
unsigned short var_6 = (unsigned short)40766;
unsigned short var_9 = (unsigned short)23692;
signed char var_11 = (signed char)-9;
unsigned int var_12 = 870990290U;
short var_14 = (short)10611;
int zero = 0;
unsigned long long int var_17 = 3050706770067635268ULL;
short var_18 = (short)2906;
void init() {
}

void checksum() {
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
