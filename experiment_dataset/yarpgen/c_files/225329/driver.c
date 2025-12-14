#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
unsigned char var_5 = (unsigned char)234;
unsigned char var_7 = (unsigned char)92;
unsigned char var_9 = (unsigned char)3;
unsigned char var_10 = (unsigned char)9;
unsigned char var_11 = (unsigned char)33;
unsigned char var_12 = (unsigned char)209;
unsigned char var_13 = (unsigned char)41;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
unsigned char var_18 = (unsigned char)167;
unsigned char var_19 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
