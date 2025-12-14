#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1572212882;
unsigned char var_1 = (unsigned char)206;
unsigned char var_11 = (unsigned char)62;
unsigned long long int var_16 = 7425811227394744137ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
signed char var_20 = (signed char)30;
unsigned char var_21 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
