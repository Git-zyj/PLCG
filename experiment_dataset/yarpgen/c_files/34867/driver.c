#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned char var_1 = (unsigned char)110;
unsigned char var_5 = (unsigned char)227;
unsigned char var_6 = (unsigned char)57;
unsigned char var_9 = (unsigned char)158;
unsigned char var_11 = (unsigned char)131;
unsigned char var_12 = (unsigned char)215;
unsigned char var_13 = (unsigned char)105;
unsigned char var_14 = (unsigned char)162;
unsigned char var_16 = (unsigned char)107;
unsigned char var_18 = (unsigned char)44;
int zero = 0;
unsigned char var_20 = (unsigned char)32;
unsigned char var_21 = (unsigned char)243;
unsigned char var_22 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
