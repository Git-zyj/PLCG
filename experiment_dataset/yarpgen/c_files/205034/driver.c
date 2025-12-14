#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 11507081U;
signed char var_6 = (signed char)46;
unsigned short var_7 = (unsigned short)38140;
signed char var_8 = (signed char)107;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
unsigned int var_14 = 1925355524U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
