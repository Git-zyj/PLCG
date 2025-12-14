#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)11232;
unsigned short var_11 = (unsigned short)44903;
int var_17 = -563668615;
unsigned short var_18 = (unsigned short)240;
int zero = 0;
short var_19 = (short)29950;
unsigned short var_20 = (unsigned short)49053;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
