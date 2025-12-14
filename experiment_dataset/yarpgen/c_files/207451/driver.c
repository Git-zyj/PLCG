#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2699880462U;
unsigned int var_3 = 2194042084U;
unsigned int var_5 = 449139232U;
unsigned char var_6 = (unsigned char)26;
short var_8 = (short)-3597;
long long int var_9 = 9003092705438298921LL;
long long int var_15 = 3509594840084018085LL;
int zero = 0;
unsigned char var_17 = (unsigned char)116;
unsigned int var_18 = 954435838U;
void init() {
}

void checksum() {
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
