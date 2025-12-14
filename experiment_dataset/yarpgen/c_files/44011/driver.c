#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 777544007;
unsigned short var_11 = (unsigned short)13163;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)11610;
unsigned short var_15 = (unsigned short)745;
int var_16 = 1446080351;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
