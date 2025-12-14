#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55023;
short var_1 = (short)-22814;
unsigned long long int var_6 = 18388747438952295895ULL;
unsigned long long int var_7 = 9457551546139958683ULL;
unsigned int var_10 = 2833751346U;
unsigned short var_15 = (unsigned short)14472;
signed char var_17 = (signed char)-99;
int zero = 0;
unsigned long long int var_19 = 4072408838666767500ULL;
short var_20 = (short)-31279;
unsigned char var_21 = (unsigned char)83;
unsigned short var_22 = (unsigned short)19865;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
