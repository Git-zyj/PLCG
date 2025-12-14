#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned int var_3 = 3795073279U;
unsigned char var_4 = (unsigned char)159;
unsigned int var_5 = 1604738463U;
unsigned int var_7 = 1428025120U;
unsigned int var_8 = 34523198U;
unsigned char var_9 = (unsigned char)243;
unsigned char var_10 = (unsigned char)191;
unsigned int var_11 = 442534096U;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
unsigned int var_13 = 2164784311U;
unsigned int var_14 = 4139053396U;
unsigned char var_15 = (unsigned char)64;
unsigned int var_16 = 1939859387U;
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
