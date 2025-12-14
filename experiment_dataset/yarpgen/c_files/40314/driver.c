#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1717900865U;
unsigned char var_5 = (unsigned char)182;
int var_8 = -1635661250;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
unsigned char var_11 = (unsigned char)120;
unsigned short var_12 = (unsigned short)18328;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
