#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19837;
short var_13 = (short)-10596;
int zero = 0;
unsigned long long int var_14 = 10172814787281299782ULL;
unsigned char var_15 = (unsigned char)179;
unsigned long long int var_16 = 164618339941177469ULL;
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
