#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned char var_4 = (unsigned char)234;
unsigned short var_8 = (unsigned short)20206;
unsigned long long int var_9 = 13716486007302638883ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)17825;
short var_11 = (short)-28848;
unsigned int var_12 = 1904801620U;
unsigned long long int var_13 = 8949569527388170692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
