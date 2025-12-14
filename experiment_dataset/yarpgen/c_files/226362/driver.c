#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 958058494U;
unsigned short var_9 = (unsigned short)17804;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
unsigned int var_21 = 266419614U;
unsigned long long int var_22 = 10272480992627009389ULL;
long long int var_23 = -2080374714751676922LL;
unsigned long long int var_24 = 1508008220579298096ULL;
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
