#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 566419642U;
unsigned short var_1 = (unsigned short)59203;
int var_2 = -795579833;
signed char var_3 = (signed char)-3;
int var_4 = 358808021;
signed char var_6 = (signed char)-12;
unsigned short var_7 = (unsigned short)46585;
unsigned char var_8 = (unsigned char)28;
unsigned char var_9 = (unsigned char)137;
int zero = 0;
signed char var_11 = (signed char)-108;
int var_12 = -2044151273;
unsigned short var_13 = (unsigned short)53830;
short var_14 = (short)2231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
