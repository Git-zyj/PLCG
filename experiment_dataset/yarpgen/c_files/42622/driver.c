#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned char var_2 = (unsigned char)217;
unsigned short var_3 = (unsigned short)37484;
unsigned short var_6 = (unsigned short)19278;
unsigned char var_7 = (unsigned char)94;
unsigned short var_9 = (unsigned short)58700;
unsigned char var_10 = (unsigned char)253;
int zero = 0;
unsigned char var_14 = (unsigned char)206;
unsigned char var_15 = (unsigned char)8;
unsigned short var_16 = (unsigned short)2710;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
