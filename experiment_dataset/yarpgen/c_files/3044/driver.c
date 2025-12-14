#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)5;
unsigned char var_4 = (unsigned char)129;
unsigned char var_5 = (unsigned char)200;
unsigned char var_9 = (unsigned char)220;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
unsigned char var_11 = (unsigned char)62;
unsigned char var_12 = (unsigned char)187;
unsigned char var_13 = (unsigned char)34;
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
