#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)55696;
unsigned short var_5 = (unsigned short)28075;
unsigned short var_11 = (unsigned short)27923;
int var_15 = 557466460;
unsigned int var_18 = 2027757342U;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-26115;
unsigned int var_21 = 1081846620U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
