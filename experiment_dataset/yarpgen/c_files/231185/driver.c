#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1662;
unsigned char var_6 = (unsigned char)247;
int zero = 0;
short var_10 = (short)-13119;
unsigned int var_11 = 713092031U;
unsigned char var_12 = (unsigned char)185;
signed char var_13 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
