#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1661;
int var_10 = -831180313;
unsigned int var_12 = 316476596U;
int var_13 = 1751306295;
int zero = 0;
unsigned int var_20 = 1514213598U;
unsigned char var_21 = (unsigned char)115;
void init() {
}

void checksum() {
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
