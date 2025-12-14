#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)31600;
unsigned int var_11 = 1137756072U;
unsigned long long int var_13 = 2423294806920186543ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2302209762U;
unsigned char var_21 = (unsigned char)127;
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
