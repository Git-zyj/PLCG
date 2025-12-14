#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1117751424;
unsigned char var_3 = (unsigned char)95;
unsigned char var_4 = (unsigned char)103;
int var_5 = 1092941744;
signed char var_12 = (signed char)90;
signed char var_14 = (signed char)-3;
int zero = 0;
unsigned short var_15 = (unsigned short)65285;
short var_16 = (short)-7756;
void init() {
}

void checksum() {
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
