#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 676782284U;
int var_7 = -2032120665;
unsigned char var_8 = (unsigned char)89;
int zero = 0;
long long int var_11 = -2381867906855863770LL;
unsigned short var_12 = (unsigned short)45065;
unsigned short var_13 = (unsigned short)23880;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
