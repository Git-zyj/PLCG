#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16169046429721589009ULL;
unsigned char var_1 = (unsigned char)168;
short var_2 = (short)26513;
unsigned long long int var_5 = 17865587999133797860ULL;
int zero = 0;
signed char var_18 = (signed char)16;
unsigned long long int var_19 = 4622661106785029313ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
