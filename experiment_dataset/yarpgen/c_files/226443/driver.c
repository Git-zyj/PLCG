#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
unsigned short var_3 = (unsigned short)480;
unsigned int var_5 = 3195321242U;
int var_6 = -269497931;
int zero = 0;
unsigned char var_10 = (unsigned char)24;
long long int var_11 = 880791697377793370LL;
unsigned int var_12 = 3968699693U;
unsigned char var_13 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
