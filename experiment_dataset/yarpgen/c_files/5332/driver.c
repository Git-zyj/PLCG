#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20539;
signed char var_3 = (signed char)-16;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-5;
unsigned long long int var_10 = 2315813303529448431ULL;
unsigned long long int var_11 = 10462199761889649120ULL;
int var_12 = -310130695;
int var_13 = 1842979054;
unsigned short var_16 = (unsigned short)33729;
int zero = 0;
unsigned long long int var_17 = 1416325450791197720ULL;
short var_18 = (short)31845;
unsigned short var_19 = (unsigned short)38034;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
