#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6716535345163742652ULL;
int var_7 = 1824038927;
unsigned long long int var_14 = 14228691381267031686ULL;
int zero = 0;
signed char var_15 = (signed char)34;
unsigned char var_16 = (unsigned char)42;
int var_17 = 928085823;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
