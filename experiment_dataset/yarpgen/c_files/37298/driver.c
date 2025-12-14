#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)105;
unsigned char var_9 = (unsigned char)221;
unsigned char var_10 = (unsigned char)14;
short var_13 = (short)-22783;
int zero = 0;
unsigned long long int var_14 = 3162942214252856431ULL;
unsigned int var_15 = 1641938184U;
signed char var_16 = (signed char)20;
int var_17 = -2045377568;
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
