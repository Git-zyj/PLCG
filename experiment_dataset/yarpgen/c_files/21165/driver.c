#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 613143630;
int var_5 = -1392894348;
unsigned long long int var_12 = 10285435641688062810ULL;
signed char var_13 = (signed char)-98;
unsigned int var_14 = 1686682848U;
int var_15 = 385231317;
int zero = 0;
int var_16 = -874518956;
unsigned int var_17 = 1992494045U;
void init() {
}

void checksum() {
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
