#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8448;
short var_2 = (short)-15503;
short var_4 = (short)2832;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)91;
unsigned short var_11 = (unsigned short)40117;
int zero = 0;
unsigned short var_13 = (unsigned short)12889;
unsigned int var_14 = 2086665484U;
unsigned char var_15 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
