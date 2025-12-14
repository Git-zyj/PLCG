#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)218;
unsigned char var_11 = (unsigned char)109;
int zero = 0;
unsigned char var_17 = (unsigned char)55;
unsigned char var_18 = (unsigned char)121;
unsigned char var_19 = (unsigned char)239;
unsigned char var_20 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
