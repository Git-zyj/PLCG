#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 589283593;
int var_3 = -1930966215;
unsigned char var_7 = (unsigned char)139;
int zero = 0;
int var_14 = 1553525634;
int var_15 = 1723239430;
unsigned char var_16 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
