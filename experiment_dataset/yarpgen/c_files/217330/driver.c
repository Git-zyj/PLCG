#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1562699607;
unsigned short var_3 = (unsigned short)34267;
unsigned char var_5 = (unsigned char)157;
unsigned short var_7 = (unsigned short)39655;
int zero = 0;
unsigned char var_11 = (unsigned char)197;
unsigned char var_12 = (unsigned char)22;
signed char var_13 = (signed char)-81;
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
