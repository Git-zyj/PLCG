#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = 8820862619155235881LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)229;
int zero = 0;
unsigned short var_14 = (unsigned short)51656;
unsigned int var_15 = 163263905U;
signed char var_16 = (signed char)107;
long long int var_17 = -3779771250168399743LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
