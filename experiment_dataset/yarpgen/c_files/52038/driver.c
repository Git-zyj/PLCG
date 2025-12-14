#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7902761836709215298LL;
unsigned short var_3 = (unsigned short)36812;
unsigned char var_5 = (unsigned char)192;
unsigned int var_6 = 2370793559U;
_Bool var_7 = (_Bool)0;
int var_10 = -34832406;
long long int var_12 = 3339983566605864962LL;
long long int var_13 = -3620368969229196429LL;
int zero = 0;
int var_14 = -2015137227;
unsigned char var_15 = (unsigned char)161;
unsigned int var_16 = 3873992478U;
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
