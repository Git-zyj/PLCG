#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
long long int var_6 = -5556995640725976642LL;
unsigned long long int var_9 = 15322325648084915171ULL;
int var_10 = 1782445382;
unsigned short var_12 = (unsigned short)62099;
int zero = 0;
unsigned int var_14 = 1119421338U;
unsigned int var_15 = 1452001134U;
void init() {
}

void checksum() {
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
