#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)11;
unsigned char var_11 = (unsigned char)209;
unsigned char var_15 = (unsigned char)115;
unsigned char var_19 = (unsigned char)167;
int zero = 0;
unsigned char var_20 = (unsigned char)44;
unsigned char var_21 = (unsigned char)56;
void init() {
}

void checksum() {
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
