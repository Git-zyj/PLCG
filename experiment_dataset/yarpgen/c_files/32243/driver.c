#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27178;
unsigned char var_2 = (unsigned char)11;
unsigned long long int var_5 = 13731838110583264951ULL;
int zero = 0;
unsigned long long int var_12 = 7242437594063341690ULL;
short var_13 = (short)21520;
unsigned int var_14 = 3843319920U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
