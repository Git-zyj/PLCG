#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-9124;
short var_3 = (short)31070;
unsigned char var_5 = (unsigned char)181;
int var_7 = 753376181;
short var_8 = (short)-30883;
int zero = 0;
int var_13 = -2111242800;
unsigned short var_14 = (unsigned short)41479;
unsigned long long int var_15 = 14281640498356812592ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
