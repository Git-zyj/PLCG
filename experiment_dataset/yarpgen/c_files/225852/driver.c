#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 7824619964524318039ULL;
unsigned short var_9 = (unsigned short)27384;
unsigned short var_10 = (unsigned short)29140;
unsigned char var_15 = (unsigned char)25;
int zero = 0;
unsigned short var_16 = (unsigned short)56862;
unsigned char var_17 = (unsigned char)199;
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
