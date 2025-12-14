#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6567119680379163687ULL;
short var_16 = (short)19066;
unsigned char var_17 = (unsigned char)86;
unsigned int var_18 = 2854555849U;
int zero = 0;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)12419;
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
