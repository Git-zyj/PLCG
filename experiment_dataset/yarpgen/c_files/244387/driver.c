#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22067;
unsigned long long int var_7 = 5011728804347386139ULL;
signed char var_9 = (signed char)-117;
unsigned int var_12 = 2014599860U;
int zero = 0;
unsigned short var_14 = (unsigned short)48689;
long long int var_15 = 389414536450438208LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)2055;
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
