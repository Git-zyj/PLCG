#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 308586615U;
long long int var_1 = 53035942435869676LL;
unsigned short var_3 = (unsigned short)45073;
unsigned int var_10 = 2451031114U;
unsigned int var_12 = 3168760197U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)9955;
unsigned char var_15 = (unsigned char)70;
unsigned short var_16 = (unsigned short)7635;
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
