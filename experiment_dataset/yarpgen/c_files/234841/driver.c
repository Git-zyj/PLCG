#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4516042601442737256LL;
unsigned long long int var_1 = 18305401685482761225ULL;
unsigned char var_3 = (unsigned char)137;
int var_10 = 1895163241;
int zero = 0;
unsigned short var_12 = (unsigned short)17476;
int var_13 = 2100422858;
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
