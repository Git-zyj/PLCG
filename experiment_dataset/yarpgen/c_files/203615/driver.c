#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5413588640524015204LL;
unsigned long long int var_5 = 10407059938666443745ULL;
long long int var_6 = -7911225934127665459LL;
long long int var_9 = 5964549218354828208LL;
unsigned char var_11 = (unsigned char)80;
int zero = 0;
long long int var_12 = 2681080924863696046LL;
short var_13 = (short)21922;
int var_14 = 1722474001;
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
