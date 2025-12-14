#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27323;
unsigned long long int var_4 = 16399108111600631376ULL;
int var_5 = -1541542091;
signed char var_6 = (signed char)-81;
int zero = 0;
unsigned short var_13 = (unsigned short)48987;
unsigned long long int var_14 = 8740905965287468407ULL;
unsigned char var_15 = (unsigned char)239;
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
