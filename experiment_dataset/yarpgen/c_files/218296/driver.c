#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10799;
unsigned int var_4 = 2064073709U;
unsigned char var_5 = (unsigned char)136;
unsigned short var_6 = (unsigned short)39957;
unsigned char var_8 = (unsigned char)145;
unsigned char var_11 = (unsigned char)188;
unsigned short var_13 = (unsigned short)1073;
unsigned char var_14 = (unsigned char)232;
int zero = 0;
unsigned short var_15 = (unsigned short)4056;
unsigned int var_16 = 3761496180U;
unsigned char var_17 = (unsigned char)207;
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
