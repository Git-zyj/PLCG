#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned long long int var_2 = 10780713470315795313ULL;
unsigned char var_14 = (unsigned char)153;
unsigned char var_15 = (unsigned char)185;
int zero = 0;
signed char var_16 = (signed char)49;
short var_17 = (short)-10626;
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
