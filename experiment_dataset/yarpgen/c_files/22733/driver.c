#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -5362081256895925319LL;
unsigned char var_3 = (unsigned char)65;
int var_4 = -1703338749;
unsigned long long int var_9 = 11403377914300684549ULL;
int zero = 0;
int var_12 = 369683267;
unsigned int var_13 = 2834084984U;
unsigned int var_14 = 1395924084U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
