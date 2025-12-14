#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19716;
int var_5 = -1899174771;
unsigned long long int var_6 = 1165068734611925551ULL;
int var_8 = 1233471026;
unsigned char var_10 = (unsigned char)30;
int zero = 0;
unsigned short var_13 = (unsigned short)49409;
short var_14 = (short)15467;
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
