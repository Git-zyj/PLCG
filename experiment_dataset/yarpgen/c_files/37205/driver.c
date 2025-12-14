#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)155;
unsigned char var_4 = (unsigned char)80;
unsigned long long int var_7 = 6431351238897795504ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6042852054328769377ULL;
unsigned short var_16 = (unsigned short)1579;
int var_17 = 513249796;
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
