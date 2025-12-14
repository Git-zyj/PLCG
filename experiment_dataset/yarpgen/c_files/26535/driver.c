#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9674156617332122519ULL;
unsigned long long int var_1 = 3164184612986166808ULL;
long long int var_3 = -25209407815789174LL;
unsigned char var_8 = (unsigned char)70;
unsigned long long int var_11 = 15443930548031644526ULL;
int zero = 0;
short var_17 = (short)18006;
signed char var_18 = (signed char)53;
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
