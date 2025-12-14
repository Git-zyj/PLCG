#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 468279422;
unsigned int var_4 = 185697799U;
unsigned char var_9 = (unsigned char)226;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
int var_12 = 216023915;
short var_13 = (short)28408;
void init() {
}

void checksum() {
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
