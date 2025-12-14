#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
unsigned short var_3 = (unsigned short)58097;
unsigned long long int var_6 = 7973583162652437912ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)115;
unsigned short var_12 = (unsigned short)6407;
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
