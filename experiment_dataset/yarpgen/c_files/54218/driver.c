#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
signed char var_3 = (signed char)-46;
unsigned char var_5 = (unsigned char)152;
unsigned char var_8 = (unsigned char)99;
int zero = 0;
signed char var_10 = (signed char)-23;
unsigned char var_11 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
