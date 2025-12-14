#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35712;
signed char var_4 = (signed char)56;
unsigned char var_6 = (unsigned char)69;
unsigned long long int var_7 = 2649600943810343632ULL;
unsigned long long int var_8 = 7385101248122835067ULL;
unsigned long long int var_9 = 17434570281672829481ULL;
unsigned long long int var_11 = 6178455260388758152ULL;
_Bool var_12 = (_Bool)0;
int var_15 = -2046559831;
int zero = 0;
unsigned short var_17 = (unsigned short)20220;
unsigned char var_18 = (unsigned char)62;
unsigned short var_19 = (unsigned short)64751;
unsigned long long int var_20 = 6473827190417810496ULL;
int var_21 = 806360357;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
