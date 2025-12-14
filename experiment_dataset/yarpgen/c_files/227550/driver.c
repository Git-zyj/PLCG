#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1324633640;
unsigned long long int var_1 = 12142626453147733642ULL;
unsigned char var_5 = (unsigned char)205;
unsigned int var_7 = 2907703657U;
short var_15 = (short)13162;
int zero = 0;
short var_16 = (short)21456;
long long int var_17 = -6002352291248269466LL;
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
