#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned char var_3 = (unsigned char)124;
unsigned long long int var_8 = 12414125192800158463ULL;
int zero = 0;
unsigned int var_10 = 4090369148U;
unsigned char var_11 = (unsigned char)58;
unsigned long long int var_12 = 3188485249687168563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
