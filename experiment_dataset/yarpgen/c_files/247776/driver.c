#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 214549208;
short var_10 = (short)5500;
unsigned int var_11 = 4229141897U;
unsigned char var_12 = (unsigned char)62;
int var_14 = 901651372;
int zero = 0;
short var_15 = (short)25185;
long long int var_16 = -935385157674120097LL;
unsigned int var_17 = 2883005323U;
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
