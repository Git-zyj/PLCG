#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -354944698699073494LL;
unsigned char var_9 = (unsigned char)205;
unsigned short var_10 = (unsigned short)58879;
signed char var_11 = (signed char)-14;
unsigned short var_13 = (unsigned short)31977;
int zero = 0;
unsigned int var_17 = 5646978U;
unsigned int var_18 = 2375551866U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
