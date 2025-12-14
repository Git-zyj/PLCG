#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11870;
unsigned long long int var_2 = 6605868653737646852ULL;
unsigned short var_4 = (unsigned short)6063;
int zero = 0;
unsigned short var_14 = (unsigned short)34692;
signed char var_15 = (signed char)-37;
long long int var_16 = 9170950597416472534LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
