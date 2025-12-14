#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)62378;
unsigned char var_7 = (unsigned char)132;
unsigned int var_9 = 2702079346U;
int var_14 = 572135902;
int zero = 0;
unsigned char var_16 = (unsigned char)135;
unsigned long long int var_17 = 13125349673852121716ULL;
unsigned long long int var_18 = 5309009821373207825ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
