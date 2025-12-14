#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58672;
unsigned char var_7 = (unsigned char)95;
unsigned char var_8 = (unsigned char)108;
int var_9 = 1008239743;
unsigned short var_11 = (unsigned short)21963;
unsigned short var_13 = (unsigned short)2589;
short var_14 = (short)8863;
short var_15 = (short)-23743;
unsigned char var_17 = (unsigned char)103;
int zero = 0;
unsigned short var_18 = (unsigned short)20962;
unsigned char var_19 = (unsigned char)227;
unsigned short var_20 = (unsigned short)2499;
unsigned char var_21 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
