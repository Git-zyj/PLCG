#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)66;
unsigned char var_5 = (unsigned char)117;
unsigned char var_7 = (unsigned char)71;
unsigned char var_11 = (unsigned char)205;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned char var_15 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
