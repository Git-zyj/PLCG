#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)204;
unsigned char var_11 = (unsigned char)76;
int var_12 = -1915965599;
unsigned char var_14 = (unsigned char)51;
unsigned char var_18 = (unsigned char)124;
int zero = 0;
unsigned char var_19 = (unsigned char)99;
unsigned char var_20 = (unsigned char)143;
int var_21 = -1582572785;
unsigned char var_22 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
