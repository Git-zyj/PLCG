#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9778;
unsigned char var_4 = (unsigned char)204;
signed char var_13 = (signed char)112;
int zero = 0;
unsigned int var_15 = 508130781U;
long long int var_16 = 9019744665070838906LL;
unsigned char var_17 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
