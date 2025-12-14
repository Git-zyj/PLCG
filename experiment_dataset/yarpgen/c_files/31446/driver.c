#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4912212722111131582LL;
int var_4 = -1952116396;
unsigned short var_5 = (unsigned short)18983;
unsigned char var_7 = (unsigned char)54;
int zero = 0;
unsigned char var_12 = (unsigned char)161;
int var_13 = 626354771;
unsigned long long int var_14 = 4835862494158134943ULL;
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
