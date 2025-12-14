#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28666;
unsigned int var_7 = 959476512U;
unsigned short var_9 = (unsigned short)44239;
short var_10 = (short)17728;
unsigned short var_11 = (unsigned short)47024;
int zero = 0;
unsigned short var_12 = (unsigned short)55775;
short var_13 = (short)12956;
unsigned int var_14 = 429024315U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
