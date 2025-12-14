#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1011882326U;
short var_1 = (short)-23592;
long long int var_3 = 6091269065140063839LL;
unsigned char var_8 = (unsigned char)244;
unsigned short var_10 = (unsigned short)20590;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)253;
unsigned short var_13 = (unsigned short)19195;
int zero = 0;
short var_16 = (short)-26377;
unsigned int var_17 = 1932722801U;
_Bool var_18 = (_Bool)0;
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
