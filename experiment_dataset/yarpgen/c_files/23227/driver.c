#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
short var_3 = (short)20881;
unsigned char var_7 = (unsigned char)76;
short var_11 = (short)32409;
int zero = 0;
unsigned char var_12 = (unsigned char)52;
unsigned int var_13 = 444964152U;
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
