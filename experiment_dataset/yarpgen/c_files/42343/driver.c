#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned long long int var_4 = 5904323215312123397ULL;
unsigned long long int var_5 = 5457995203739709543ULL;
unsigned long long int var_7 = 8709612959420753290ULL;
unsigned short var_9 = (unsigned short)58245;
int zero = 0;
unsigned long long int var_10 = 5146078168346090234ULL;
signed char var_11 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
