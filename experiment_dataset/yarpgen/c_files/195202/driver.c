#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27118;
signed char var_1 = (signed char)44;
unsigned char var_3 = (unsigned char)161;
unsigned char var_4 = (unsigned char)175;
int var_10 = 1513428746;
int zero = 0;
int var_11 = 1552167778;
short var_12 = (short)-31066;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
