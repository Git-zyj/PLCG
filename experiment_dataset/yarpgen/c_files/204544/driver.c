#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1506437038;
unsigned long long int var_1 = 5579093487851289238ULL;
unsigned short var_4 = (unsigned short)21752;
unsigned char var_6 = (unsigned char)184;
unsigned short var_7 = (unsigned short)22927;
signed char var_8 = (signed char)-112;
int zero = 0;
signed char var_12 = (signed char)-73;
unsigned long long int var_13 = 2765125614367474774ULL;
void init() {
}

void checksum() {
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
