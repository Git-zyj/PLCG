#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -659751740;
unsigned short var_6 = (unsigned short)40115;
unsigned short var_7 = (unsigned short)58768;
unsigned short var_11 = (unsigned short)61522;
unsigned short var_12 = (unsigned short)53805;
int var_13 = 1673319278;
unsigned int var_15 = 2983941553U;
unsigned short var_16 = (unsigned short)12129;
unsigned int var_17 = 1371291151U;
int zero = 0;
unsigned short var_20 = (unsigned short)22703;
unsigned short var_21 = (unsigned short)62180;
signed char var_22 = (signed char)-47;
long long int var_23 = 7823964021244565329LL;
int var_24 = 806238070;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
