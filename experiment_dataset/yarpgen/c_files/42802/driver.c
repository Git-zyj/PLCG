#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34175;
unsigned char var_5 = (unsigned char)52;
unsigned short var_8 = (unsigned short)40529;
unsigned short var_11 = (unsigned short)58839;
int zero = 0;
signed char var_16 = (signed char)53;
unsigned int var_17 = 1612996388U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
