#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)60015;
unsigned char var_10 = (unsigned char)240;
unsigned char var_11 = (unsigned char)192;
unsigned char var_17 = (unsigned char)140;
int zero = 0;
unsigned long long int var_19 = 1914384091179824375ULL;
unsigned char var_20 = (unsigned char)11;
void init() {
}

void checksum() {
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
