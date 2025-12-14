#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1238599527;
unsigned int var_6 = 545061752U;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned char var_16 = (unsigned char)244;
unsigned int var_17 = 2898495979U;
void init() {
}

void checksum() {
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
