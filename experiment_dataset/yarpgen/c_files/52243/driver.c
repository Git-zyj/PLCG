#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -361393923;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3329843924992392143LL;
int var_4 = 181575811;
short var_6 = (short)-7595;
int var_8 = 1757545802;
signed char var_10 = (signed char)87;
int var_11 = -1117405029;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
short var_15 = (short)18491;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
