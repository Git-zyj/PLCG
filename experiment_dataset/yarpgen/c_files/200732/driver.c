#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8249853645360491478ULL;
int var_2 = -1011676563;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 610993043054079859ULL;
unsigned short var_13 = (unsigned short)57055;
int var_14 = -1864697810;
int zero = 0;
unsigned long long int var_15 = 4469513705589620566ULL;
unsigned short var_16 = (unsigned short)14739;
unsigned char var_17 = (unsigned char)185;
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
