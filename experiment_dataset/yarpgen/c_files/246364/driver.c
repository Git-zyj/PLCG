#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10021017066184404927ULL;
unsigned char var_8 = (unsigned char)14;
unsigned char var_14 = (unsigned char)51;
int zero = 0;
signed char var_19 = (signed char)-6;
int var_20 = -285645141;
unsigned char var_21 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
