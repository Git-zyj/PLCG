#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24169;
unsigned char var_10 = (unsigned char)219;
unsigned long long int var_11 = 2573065277519543556ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)30;
unsigned int var_13 = 4084664486U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
