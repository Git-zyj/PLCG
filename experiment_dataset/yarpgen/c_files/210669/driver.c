#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned short var_2 = (unsigned short)41759;
unsigned int var_4 = 14571836U;
unsigned short var_10 = (unsigned short)13055;
unsigned short var_12 = (unsigned short)24516;
unsigned int var_14 = 2314450633U;
int zero = 0;
unsigned long long int var_15 = 1384047804736079221ULL;
unsigned long long int var_16 = 4773007968746333338ULL;
void init() {
}

void checksum() {
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
