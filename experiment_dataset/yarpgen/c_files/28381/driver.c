#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)160;
unsigned char var_10 = (unsigned char)191;
unsigned char var_16 = (unsigned char)127;
int zero = 0;
int var_17 = 1298776412;
unsigned char var_18 = (unsigned char)223;
short var_19 = (short)-2251;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
