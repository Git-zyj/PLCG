#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1863076332U;
short var_1 = (short)-6570;
unsigned char var_2 = (unsigned char)223;
unsigned short var_5 = (unsigned short)56300;
unsigned short var_6 = (unsigned short)45977;
_Bool var_10 = (_Bool)0;
short var_11 = (short)6639;
unsigned short var_12 = (unsigned short)23167;
int zero = 0;
int var_13 = -1611730741;
int var_14 = -981652967;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
