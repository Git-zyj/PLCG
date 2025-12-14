#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2968200957U;
unsigned int var_10 = 3013047790U;
int zero = 0;
unsigned short var_12 = (unsigned short)21960;
unsigned char var_13 = (unsigned char)85;
unsigned char var_14 = (unsigned char)127;
short var_15 = (short)18002;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
