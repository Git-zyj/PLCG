#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
short var_3 = (short)-16870;
int var_5 = -380304888;
unsigned short var_9 = (unsigned short)30388;
int zero = 0;
unsigned char var_12 = (unsigned char)46;
unsigned char var_13 = (unsigned char)223;
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
