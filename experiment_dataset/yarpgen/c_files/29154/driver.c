#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3053;
short var_11 = (short)-7873;
unsigned char var_15 = (unsigned char)102;
unsigned int var_16 = 156903283U;
int zero = 0;
unsigned long long int var_18 = 16654244632471310602ULL;
short var_19 = (short)2441;
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
