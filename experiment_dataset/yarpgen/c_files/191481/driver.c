#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1869598972U;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 269726206U;
int zero = 0;
unsigned long long int var_13 = 17931073694900688252ULL;
unsigned short var_14 = (unsigned short)45979;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
