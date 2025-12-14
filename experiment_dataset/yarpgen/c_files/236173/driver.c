#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
int var_7 = 2071047357;
unsigned char var_11 = (unsigned char)64;
unsigned char var_12 = (unsigned char)134;
unsigned char var_13 = (unsigned char)48;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
int var_18 = 1332301620;
unsigned char var_19 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
