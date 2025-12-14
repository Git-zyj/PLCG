#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6675113369772306546ULL;
unsigned long long int var_2 = 17583648352930124255ULL;
unsigned char var_3 = (unsigned char)113;
unsigned char var_4 = (unsigned char)86;
unsigned long long int var_5 = 15431297785582451195ULL;
unsigned char var_6 = (unsigned char)5;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
unsigned long long int var_16 = 9009830060120780508ULL;
unsigned long long int var_17 = 10623660223016277260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
