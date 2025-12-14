#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned short var_2 = (unsigned short)26000;
unsigned long long int var_4 = 5034426941501814674ULL;
int var_5 = -235620778;
unsigned short var_6 = (unsigned short)17709;
unsigned long long int var_7 = 16431087529535041393ULL;
int var_8 = 480903922;
signed char var_12 = (signed char)-107;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
short var_14 = (short)-22501;
unsigned short var_15 = (unsigned short)23798;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
