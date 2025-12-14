#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)15;
short var_7 = (short)11733;
unsigned int var_10 = 711654810U;
unsigned long long int var_11 = 9229005692995138582ULL;
unsigned char var_13 = (unsigned char)236;
int var_17 = -889506711;
int zero = 0;
long long int var_20 = -139426846012161404LL;
int var_21 = -1157089001;
int var_22 = 1717000477;
unsigned int var_23 = 3795772256U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
