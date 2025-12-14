#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 3151629389538591541ULL;
unsigned long long int var_10 = 5243968161186320165ULL;
signed char var_16 = (signed char)94;
int zero = 0;
short var_18 = (short)12823;
unsigned char var_19 = (unsigned char)110;
unsigned long long int var_20 = 10830527765653692078ULL;
void init() {
}

void checksum() {
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
