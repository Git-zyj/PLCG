#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1426006380U;
unsigned char var_5 = (unsigned char)12;
int var_7 = -1858770075;
unsigned char var_9 = (unsigned char)212;
unsigned char var_11 = (unsigned char)249;
unsigned int var_12 = 1455196849U;
signed char var_13 = (signed char)126;
int zero = 0;
unsigned char var_15 = (unsigned char)122;
signed char var_16 = (signed char)-79;
unsigned char var_17 = (unsigned char)221;
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
