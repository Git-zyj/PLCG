#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned int var_3 = 3819558501U;
short var_4 = (short)32108;
unsigned int var_5 = 1873932555U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2832132354U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)25660;
unsigned char var_12 = (unsigned char)130;
unsigned short var_13 = (unsigned short)13746;
short var_14 = (short)13496;
short var_15 = (short)28190;
int zero = 0;
unsigned long long int var_16 = 8181598020454681591ULL;
unsigned int var_17 = 355824892U;
unsigned char var_18 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
