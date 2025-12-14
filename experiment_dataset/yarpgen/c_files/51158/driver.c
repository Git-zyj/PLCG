#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3840;
unsigned short var_2 = (unsigned short)54241;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)2045;
int var_11 = 750385053;
_Bool var_13 = (_Bool)0;
int var_16 = -1327799539;
int zero = 0;
unsigned short var_17 = (unsigned short)5907;
_Bool var_18 = (_Bool)1;
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
