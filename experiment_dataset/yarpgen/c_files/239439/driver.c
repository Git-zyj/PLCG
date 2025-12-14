#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
unsigned char var_3 = (unsigned char)223;
unsigned char var_5 = (unsigned char)43;
unsigned short var_6 = (unsigned short)61531;
int zero = 0;
unsigned long long int var_13 = 29195468788004976ULL;
unsigned char var_14 = (unsigned char)21;
void init() {
}

void checksum() {
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
