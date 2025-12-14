#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45211;
unsigned char var_7 = (unsigned char)192;
long long int var_9 = -572686553883031592LL;
unsigned char var_10 = (unsigned char)58;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
unsigned long long int var_14 = 3349065056253873424ULL;
unsigned int var_15 = 3055415623U;
long long int var_16 = -5014658462115372228LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
