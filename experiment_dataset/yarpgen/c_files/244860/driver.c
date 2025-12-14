#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)127;
unsigned short var_7 = (unsigned short)35236;
int var_9 = -920320558;
unsigned char var_10 = (unsigned char)148;
unsigned short var_11 = (unsigned short)52732;
unsigned short var_12 = (unsigned short)35211;
int zero = 0;
unsigned short var_17 = (unsigned short)61782;
unsigned short var_18 = (unsigned short)8666;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
