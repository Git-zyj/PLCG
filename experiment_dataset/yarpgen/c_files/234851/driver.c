#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12920;
unsigned short var_2 = (unsigned short)42432;
signed char var_3 = (signed char)73;
unsigned int var_5 = 79555688U;
short var_7 = (short)5177;
unsigned int var_9 = 95821735U;
int zero = 0;
unsigned short var_10 = (unsigned short)57910;
unsigned short var_11 = (unsigned short)45309;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
