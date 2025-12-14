#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65393;
unsigned short var_2 = (unsigned short)3523;
signed char var_3 = (signed char)-92;
unsigned char var_5 = (unsigned char)43;
unsigned int var_8 = 1154850462U;
signed char var_9 = (signed char)-82;
unsigned long long int var_12 = 10266092152074963406ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10590755365954206195ULL;
unsigned long long int var_15 = 3087791218809937711ULL;
unsigned short var_16 = (unsigned short)11440;
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
