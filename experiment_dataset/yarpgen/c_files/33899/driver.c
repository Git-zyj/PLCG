#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35356;
unsigned long long int var_3 = 16836502512457021832ULL;
unsigned short var_4 = (unsigned short)63534;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)107;
unsigned short var_10 = (unsigned short)64913;
unsigned short var_11 = (unsigned short)18338;
int zero = 0;
unsigned int var_14 = 454772851U;
unsigned char var_15 = (unsigned char)132;
int var_16 = 647356483;
void init() {
}

void checksum() {
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
