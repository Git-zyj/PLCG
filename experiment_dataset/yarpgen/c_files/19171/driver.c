#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)220;
signed char var_5 = (signed char)21;
short var_9 = (short)-9537;
signed char var_10 = (signed char)-48;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
unsigned long long int var_14 = 591086903362216282ULL;
unsigned int var_15 = 3385465007U;
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
