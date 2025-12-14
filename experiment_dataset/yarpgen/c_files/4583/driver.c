#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1892483491;
short var_6 = (short)-6539;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)51135;
unsigned short var_11 = (unsigned short)11556;
int var_13 = 1667693885;
int zero = 0;
int var_14 = 1974335597;
unsigned long long int var_15 = 16154134263902965583ULL;
signed char var_16 = (signed char)-39;
void init() {
}

void checksum() {
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
