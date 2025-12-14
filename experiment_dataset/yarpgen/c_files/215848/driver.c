#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 182448170U;
unsigned char var_6 = (unsigned char)227;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
unsigned int var_12 = 698380117U;
unsigned int var_13 = 2003937897U;
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
