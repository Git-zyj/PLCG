#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)241;
unsigned char var_10 = (unsigned char)53;
unsigned char var_11 = (unsigned char)30;
unsigned char var_17 = (unsigned char)29;
int zero = 0;
int var_18 = -343057912;
int var_19 = 371004860;
unsigned char var_20 = (unsigned char)29;
short var_21 = (short)-25569;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
