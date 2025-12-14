#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned long long int var_5 = 15223725664195982041ULL;
unsigned long long int var_6 = 13439549788471463495ULL;
unsigned short var_10 = (unsigned short)12070;
unsigned long long int var_11 = 14811192423921795425ULL;
unsigned long long int var_12 = 8362834491316771875ULL;
int zero = 0;
unsigned long long int var_19 = 17143179238214125707ULL;
unsigned long long int var_20 = 3547811179805759429ULL;
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
