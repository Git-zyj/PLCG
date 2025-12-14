#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1463906467U;
signed char var_7 = (signed char)-39;
long long int var_10 = 3819823605912054534LL;
int zero = 0;
unsigned char var_12 = (unsigned char)154;
unsigned long long int var_13 = 11375805104954723684ULL;
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
