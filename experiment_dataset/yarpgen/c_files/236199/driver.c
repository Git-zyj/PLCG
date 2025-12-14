#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10331;
unsigned short var_2 = (unsigned short)35602;
unsigned short var_4 = (unsigned short)56966;
int var_5 = -556533579;
unsigned int var_8 = 2020502624U;
unsigned short var_10 = (unsigned short)52988;
int zero = 0;
unsigned short var_11 = (unsigned short)64105;
short var_12 = (short)23010;
short var_13 = (short)-20308;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
