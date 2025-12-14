#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10993583283191048472ULL;
unsigned char var_4 = (unsigned char)101;
unsigned int var_10 = 1273029772U;
unsigned short var_12 = (unsigned short)11451;
short var_14 = (short)17571;
signed char var_16 = (signed char)-98;
int zero = 0;
unsigned short var_17 = (unsigned short)53443;
short var_18 = (short)-14355;
int var_19 = 404765664;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
