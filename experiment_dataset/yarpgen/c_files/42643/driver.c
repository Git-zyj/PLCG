#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6540764736127322614LL;
unsigned short var_5 = (unsigned short)28007;
unsigned long long int var_8 = 17266170972346032190ULL;
unsigned char var_10 = (unsigned char)227;
int zero = 0;
unsigned int var_14 = 293929655U;
long long int var_15 = -6982800370254181383LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
