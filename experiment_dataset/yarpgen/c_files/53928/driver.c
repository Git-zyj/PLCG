#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24747;
unsigned short var_5 = (unsigned short)34030;
signed char var_12 = (signed char)-91;
int zero = 0;
unsigned char var_15 = (unsigned char)100;
unsigned long long int var_16 = 4210437503316677638ULL;
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
