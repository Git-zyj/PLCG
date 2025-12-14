#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)48755;
long long int var_5 = 7857266562361492912LL;
unsigned int var_13 = 2900515237U;
int zero = 0;
short var_16 = (short)4160;
long long int var_17 = -8484867754557534838LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
