#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54839;
signed char var_6 = (signed char)-51;
short var_9 = (short)13256;
int var_17 = 237607539;
int zero = 0;
unsigned long long int var_19 = 14336012275641513707ULL;
unsigned short var_20 = (unsigned short)16268;
unsigned char var_21 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
