#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13964357938465108989ULL;
int var_4 = -183080076;
unsigned short var_6 = (unsigned short)6846;
int zero = 0;
unsigned short var_11 = (unsigned short)46473;
unsigned short var_12 = (unsigned short)63800;
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
