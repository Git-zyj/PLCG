#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)155;
unsigned char var_13 = (unsigned char)13;
unsigned char var_15 = (unsigned char)129;
unsigned char var_17 = (unsigned char)15;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
unsigned char var_20 = (unsigned char)160;
unsigned char var_21 = (unsigned char)107;
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
