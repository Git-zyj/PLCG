#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53179;
unsigned char var_1 = (unsigned char)33;
signed char var_5 = (signed char)-8;
unsigned char var_6 = (unsigned char)88;
int zero = 0;
unsigned short var_13 = (unsigned short)31981;
unsigned int var_14 = 3654085281U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
