#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned char var_1 = (unsigned char)31;
short var_2 = (short)27688;
int var_4 = -1042980995;
int var_8 = 1094183115;
int var_9 = 690681280;
short var_10 = (short)11438;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
unsigned long long int var_13 = 6393147215377136929ULL;
unsigned char var_14 = (unsigned char)33;
long long int var_15 = 250388642999304242LL;
unsigned int var_16 = 1806052925U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
