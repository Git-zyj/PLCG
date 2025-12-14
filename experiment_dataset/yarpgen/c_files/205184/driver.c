#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29751;
unsigned char var_5 = (unsigned char)102;
unsigned long long int var_16 = 13620406952529282742ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)60113;
int var_21 = -2111002201;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
