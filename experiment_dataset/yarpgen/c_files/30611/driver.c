#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63768;
_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)45295;
long long int var_7 = -3468870512556675420LL;
signed char var_12 = (signed char)30;
int zero = 0;
signed char var_14 = (signed char)14;
int var_15 = -651055471;
unsigned short var_16 = (unsigned short)28956;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
