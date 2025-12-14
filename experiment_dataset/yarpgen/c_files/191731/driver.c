#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32323;
int var_1 = -3588860;
unsigned short var_7 = (unsigned short)5575;
short var_9 = (short)8020;
int zero = 0;
unsigned int var_10 = 243043717U;
unsigned char var_11 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
