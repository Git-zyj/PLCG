#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -129355005;
unsigned char var_3 = (unsigned char)133;
unsigned char var_8 = (unsigned char)184;
int zero = 0;
unsigned int var_18 = 3670972193U;
unsigned char var_19 = (unsigned char)182;
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
