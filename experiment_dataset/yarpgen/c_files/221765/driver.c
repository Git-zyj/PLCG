#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned char var_1 = (unsigned char)170;
unsigned char var_2 = (unsigned char)179;
unsigned char var_4 = (unsigned char)216;
unsigned char var_7 = (unsigned char)227;
unsigned char var_8 = (unsigned char)21;
unsigned char var_10 = (unsigned char)248;
int zero = 0;
unsigned char var_11 = (unsigned char)39;
unsigned char var_12 = (unsigned char)111;
unsigned char var_13 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
