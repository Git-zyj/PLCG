#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4214340430U;
unsigned char var_2 = (unsigned char)126;
unsigned short var_9 = (unsigned short)31360;
int zero = 0;
unsigned char var_16 = (unsigned char)91;
unsigned short var_17 = (unsigned short)37904;
void init() {
}

void checksum() {
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
