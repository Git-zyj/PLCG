#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)37962;
unsigned int var_10 = 1843614726U;
long long int var_11 = -956443437786510002LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_19 = 2169224079110679840ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
int var_21 = 1857224767;
unsigned short var_22 = (unsigned short)8287;
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
