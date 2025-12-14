#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2716822751U;
unsigned int var_5 = 3863980138U;
signed char var_7 = (signed char)-122;
signed char var_8 = (signed char)-115;
unsigned int var_10 = 3317878676U;
int zero = 0;
unsigned short var_12 = (unsigned short)14977;
signed char var_13 = (signed char)70;
void init() {
}

void checksum() {
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
