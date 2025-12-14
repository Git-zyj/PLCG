#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
_Bool var_3 = (_Bool)1;
long long int var_5 = -9027077871900626618LL;
unsigned int var_6 = 867948632U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)165;
int zero = 0;
short var_10 = (short)-20026;
unsigned int var_11 = 1928196417U;
unsigned short var_12 = (unsigned short)16787;
unsigned int var_13 = 4090624344U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
