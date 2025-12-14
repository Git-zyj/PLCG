#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
signed char var_3 = (signed char)-19;
unsigned char var_5 = (unsigned char)32;
int var_6 = -1469433001;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
unsigned short var_12 = (unsigned short)15437;
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
