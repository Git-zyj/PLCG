#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
unsigned short var_4 = (unsigned short)39474;
unsigned int var_9 = 2203928958U;
int zero = 0;
unsigned int var_13 = 425412956U;
unsigned int var_14 = 2407825624U;
unsigned short var_15 = (unsigned short)5106;
unsigned short var_16 = (unsigned short)25935;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
