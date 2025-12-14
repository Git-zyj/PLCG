#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
unsigned char var_3 = (unsigned char)73;
unsigned char var_7 = (unsigned char)16;
unsigned char var_8 = (unsigned char)46;
unsigned char var_18 = (unsigned char)114;
int zero = 0;
unsigned char var_20 = (unsigned char)135;
unsigned char var_21 = (unsigned char)57;
unsigned char var_22 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
