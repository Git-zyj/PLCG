#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8169;
unsigned int var_6 = 383256594U;
unsigned char var_7 = (unsigned char)233;
unsigned int var_18 = 2948075869U;
int zero = 0;
unsigned short var_19 = (unsigned short)11214;
unsigned short var_20 = (unsigned short)3970;
unsigned short var_21 = (unsigned short)2285;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
