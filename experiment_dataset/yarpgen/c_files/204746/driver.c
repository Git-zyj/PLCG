#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)54350;
unsigned long long int var_8 = 639858727636612538ULL;
unsigned char var_11 = (unsigned char)147;
long long int var_13 = -3356529372122802846LL;
int zero = 0;
signed char var_16 = (signed char)41;
unsigned char var_17 = (unsigned char)103;
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
