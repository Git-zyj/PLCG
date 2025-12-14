#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14986;
int var_7 = -954288203;
int var_9 = 696811621;
int var_10 = 1493408984;
unsigned char var_14 = (unsigned char)158;
int zero = 0;
unsigned short var_15 = (unsigned short)37971;
signed char var_16 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
