#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1704441921U;
short var_3 = (short)24714;
unsigned short var_5 = (unsigned short)53871;
_Bool var_8 = (_Bool)0;
int var_11 = -836466016;
unsigned int var_12 = 3130425119U;
unsigned short var_14 = (unsigned short)42409;
int zero = 0;
short var_15 = (short)11764;
short var_16 = (short)-10725;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
