#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2643370939249952850ULL;
unsigned char var_9 = (unsigned char)14;
signed char var_14 = (signed char)-61;
int zero = 0;
unsigned int var_19 = 301422305U;
unsigned short var_20 = (unsigned short)29626;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
