#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52969;
signed char var_3 = (signed char)124;
unsigned long long int var_4 = 17431370140455060379ULL;
unsigned int var_6 = 1391582582U;
short var_7 = (short)23575;
short var_15 = (short)12879;
unsigned char var_16 = (unsigned char)247;
short var_17 = (short)-6133;
int zero = 0;
int var_18 = -1754682;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
