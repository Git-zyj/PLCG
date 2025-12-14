#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3904926484768720499LL;
long long int var_6 = -5344348825849093893LL;
short var_9 = (short)-21231;
int zero = 0;
unsigned short var_15 = (unsigned short)59905;
long long int var_16 = -3485405207237623865LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)18725;
long long int var_19 = -2585742797104078057LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
