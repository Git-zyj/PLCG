#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3043;
unsigned int var_2 = 3456684279U;
unsigned int var_9 = 2853742737U;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
unsigned int var_12 = 2165841469U;
unsigned long long int var_13 = 10718030685788617397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
