#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2137109953U;
unsigned short var_9 = (unsigned short)45571;
unsigned int var_10 = 1963965802U;
int zero = 0;
unsigned short var_13 = (unsigned short)49818;
unsigned short var_14 = (unsigned short)46320;
long long int var_15 = -7701169981265850254LL;
unsigned int var_16 = 516875537U;
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
