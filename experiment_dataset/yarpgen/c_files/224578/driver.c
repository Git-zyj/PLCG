#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46729;
unsigned long long int var_10 = 11683137825020396631ULL;
unsigned short var_11 = (unsigned short)160;
unsigned long long int var_12 = 16834351383768786346ULL;
int zero = 0;
signed char var_16 = (signed char)-49;
_Bool var_17 = (_Bool)1;
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
