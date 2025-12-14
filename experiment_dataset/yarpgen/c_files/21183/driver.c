#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33555;
unsigned long long int var_2 = 420900757085750600ULL;
int var_4 = 851942527;
long long int var_5 = -2813570696407636432LL;
int var_9 = -1822502454;
unsigned int var_11 = 1879263999U;
unsigned short var_12 = (unsigned short)47384;
int var_13 = -840121740;
int zero = 0;
unsigned char var_14 = (unsigned char)48;
unsigned short var_15 = (unsigned short)7039;
long long int var_16 = 4337481887348500157LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
