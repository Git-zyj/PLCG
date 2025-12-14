#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)96;
unsigned long long int var_10 = 608921945136259980ULL;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
unsigned char var_12 = (unsigned char)63;
int var_13 = 1160000483;
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
