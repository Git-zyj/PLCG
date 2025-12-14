#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1329717488U;
unsigned int var_1 = 2021922203U;
unsigned char var_5 = (unsigned char)8;
_Bool var_6 = (_Bool)1;
int var_7 = 1948331840;
unsigned short var_13 = (unsigned short)51955;
unsigned char var_14 = (unsigned char)118;
int zero = 0;
unsigned short var_15 = (unsigned short)41847;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
