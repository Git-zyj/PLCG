#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15317948657649488818ULL;
unsigned long long int var_11 = 6109302940343116610ULL;
long long int var_19 = 347364744651523398LL;
int zero = 0;
unsigned int var_20 = 2107513068U;
signed char var_21 = (signed char)86;
unsigned short var_22 = (unsigned short)65535;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
