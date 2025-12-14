#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12712997570050871711ULL;
signed char var_1 = (signed char)-59;
int var_2 = 541821005;
unsigned char var_4 = (unsigned char)11;
unsigned int var_5 = 1544805659U;
short var_6 = (short)-7761;
signed char var_7 = (signed char)22;
int zero = 0;
short var_10 = (short)8349;
unsigned char var_11 = (unsigned char)247;
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
