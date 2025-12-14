#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57558;
unsigned char var_6 = (unsigned char)100;
unsigned char var_9 = (unsigned char)233;
unsigned short var_11 = (unsigned short)530;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
unsigned char var_13 = (unsigned char)193;
unsigned short var_14 = (unsigned short)33037;
unsigned short var_15 = (unsigned short)7814;
void init() {
}

void checksum() {
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
