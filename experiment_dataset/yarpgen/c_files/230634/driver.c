#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-27932;
unsigned char var_8 = (unsigned char)119;
unsigned int var_11 = 301152991U;
int zero = 0;
unsigned long long int var_13 = 3300413825830612090ULL;
unsigned long long int var_14 = 12193367344652638785ULL;
unsigned short var_15 = (unsigned short)30370;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
