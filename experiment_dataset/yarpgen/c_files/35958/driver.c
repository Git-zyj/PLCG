#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 312776484U;
int var_4 = 2050094930;
unsigned short var_8 = (unsigned short)29379;
unsigned char var_9 = (unsigned char)89;
unsigned int var_10 = 2972208026U;
int zero = 0;
short var_15 = (short)11504;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1784777285U;
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
