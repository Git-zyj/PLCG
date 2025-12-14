#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6476883593011078344ULL;
unsigned char var_13 = (unsigned char)167;
unsigned char var_15 = (unsigned char)158;
int zero = 0;
unsigned char var_17 = (unsigned char)5;
unsigned int var_18 = 3389745507U;
int var_19 = 1258917917;
unsigned char var_20 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
