#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47341;
signed char var_5 = (signed char)92;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_14 = (unsigned short)41815;
long long int var_16 = 9149495152617760748LL;
int zero = 0;
unsigned int var_18 = 1330533366U;
long long int var_19 = 6627037504032538957LL;
short var_20 = (short)26288;
unsigned char var_21 = (unsigned char)53;
void init() {
}

void checksum() {
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
