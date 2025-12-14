#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1816073443U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 4104691150U;
short var_9 = (short)-32403;
int var_11 = -1500305424;
unsigned char var_12 = (unsigned char)233;
int zero = 0;
int var_13 = 767149884;
unsigned long long int var_14 = 3146579724404010028ULL;
unsigned char var_15 = (unsigned char)35;
unsigned char var_16 = (unsigned char)67;
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
