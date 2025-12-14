#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8003936288944208924LL;
signed char var_2 = (signed char)41;
unsigned int var_4 = 1447589295U;
unsigned short var_12 = (unsigned short)61700;
int zero = 0;
short var_14 = (short)16431;
unsigned char var_15 = (unsigned char)160;
unsigned short var_16 = (unsigned short)34497;
_Bool var_17 = (_Bool)1;
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
