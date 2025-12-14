#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
unsigned long long int var_5 = 8384480247031692670ULL;
unsigned int var_9 = 686256038U;
long long int var_11 = 7335339505266058733LL;
unsigned short var_13 = (unsigned short)23083;
int zero = 0;
unsigned int var_16 = 1255664554U;
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
