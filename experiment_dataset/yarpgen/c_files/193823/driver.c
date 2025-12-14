#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-12579;
short var_10 = (short)9756;
unsigned short var_16 = (unsigned short)39927;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned int var_18 = 3708064753U;
unsigned char var_19 = (unsigned char)49;
unsigned short var_20 = (unsigned short)22898;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
