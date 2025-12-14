#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1583904706411291483ULL;
unsigned short var_2 = (unsigned short)17935;
unsigned int var_3 = 287010888U;
unsigned long long int var_12 = 10085475038037286980ULL;
int var_13 = 2112561427;
signed char var_14 = (signed char)-39;
int zero = 0;
unsigned char var_15 = (unsigned char)150;
unsigned long long int var_16 = 12992600637520398288ULL;
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
