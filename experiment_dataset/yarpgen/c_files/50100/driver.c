#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)22;
unsigned int var_7 = 3508490718U;
unsigned int var_8 = 2147033221U;
short var_12 = (short)15174;
int zero = 0;
unsigned short var_14 = (unsigned short)2012;
unsigned long long int var_15 = 14135989090375334335ULL;
unsigned long long int var_16 = 16242333665420664636ULL;
unsigned short var_17 = (unsigned short)36328;
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
