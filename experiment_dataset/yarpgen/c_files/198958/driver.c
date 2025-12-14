#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4582;
signed char var_1 = (signed char)19;
unsigned short var_8 = (unsigned short)37875;
long long int var_9 = -263019742108601231LL;
short var_14 = (short)-8605;
int zero = 0;
unsigned short var_16 = (unsigned short)33256;
short var_17 = (short)29862;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
