#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
long long int var_5 = -7166681100253008364LL;
unsigned int var_7 = 2250223905U;
unsigned int var_8 = 285239982U;
unsigned char var_9 = (unsigned char)29;
unsigned int var_11 = 1286934892U;
long long int var_12 = -1137517837933161075LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 9903352819154658258ULL;
unsigned char var_19 = (unsigned char)84;
short var_20 = (short)-32620;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
