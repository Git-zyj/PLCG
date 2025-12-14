#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_4 = (unsigned char)137;
unsigned char var_8 = (unsigned char)254;
unsigned char var_10 = (unsigned char)107;
unsigned char var_11 = (unsigned char)188;
unsigned char var_15 = (unsigned char)24;
int zero = 0;
unsigned char var_16 = (unsigned char)253;
unsigned char var_17 = (unsigned char)175;
unsigned char var_18 = (unsigned char)44;
unsigned char var_19 = (unsigned char)17;
unsigned char var_20 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
