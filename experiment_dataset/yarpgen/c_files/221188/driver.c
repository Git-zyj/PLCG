#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)25;
unsigned short var_6 = (unsigned short)63799;
unsigned char var_7 = (unsigned char)81;
unsigned short var_9 = (unsigned short)20960;
unsigned short var_11 = (unsigned short)28226;
int var_13 = -554620256;
short var_15 = (short)22064;
unsigned long long int var_16 = 1041447046195919973ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)5577;
unsigned char var_20 = (unsigned char)221;
void init() {
}

void checksum() {
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
