#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned int var_2 = 3893798968U;
long long int var_7 = -1425170413637790315LL;
unsigned long long int var_8 = 13072233284911047463ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)34955;
unsigned char var_11 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
