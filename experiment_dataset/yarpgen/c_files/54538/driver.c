#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1667127939;
unsigned int var_3 = 1692866074U;
short var_5 = (short)-20414;
unsigned short var_6 = (unsigned short)44827;
unsigned int var_7 = 2618738538U;
unsigned int var_9 = 210038171U;
unsigned long long int var_16 = 3146066751698341726ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 821175039U;
unsigned char var_19 = (unsigned char)60;
unsigned int var_20 = 2104674428U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
