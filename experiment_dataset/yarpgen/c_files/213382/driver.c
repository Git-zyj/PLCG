#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
unsigned int var_3 = 2197591831U;
unsigned long long int var_5 = 7856904612148505847ULL;
int var_8 = -291322174;
int zero = 0;
long long int var_14 = -1337896991060746373LL;
unsigned short var_15 = (unsigned short)11305;
void init() {
}

void checksum() {
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
