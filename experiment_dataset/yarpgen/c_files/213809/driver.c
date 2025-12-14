#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_11 = -3681350380255845947LL;
unsigned char var_12 = (unsigned char)73;
unsigned int var_15 = 1776301570U;
unsigned short var_16 = (unsigned short)49582;
int zero = 0;
unsigned long long int var_18 = 1943624835429843789ULL;
unsigned int var_19 = 3610374982U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
