#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_7 = (unsigned short)42433;
int var_10 = 1987766553;
int var_13 = 2109506631;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)72;
signed char var_17 = (signed char)-26;
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
