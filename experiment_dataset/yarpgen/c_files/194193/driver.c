#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18222;
unsigned char var_2 = (unsigned char)86;
unsigned long long int var_7 = 14315725749402303508ULL;
unsigned char var_8 = (unsigned char)10;
int zero = 0;
short var_10 = (short)185;
unsigned char var_11 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
