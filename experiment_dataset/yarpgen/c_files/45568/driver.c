#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1194864385;
short var_7 = (short)-6724;
unsigned long long int var_8 = 11018541255572127105ULL;
long long int var_10 = -6556724622161436011LL;
int var_11 = -89176901;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7546836490559932790LL;
int zero = 0;
unsigned char var_17 = (unsigned char)139;
unsigned int var_18 = 544727100U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
