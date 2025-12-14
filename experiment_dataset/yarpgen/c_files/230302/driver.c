#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_6 = 1368933004004218952LL;
short var_8 = (short)9727;
unsigned long long int var_10 = 2240758045104684490ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)70;
int zero = 0;
unsigned char var_14 = (unsigned char)150;
short var_15 = (short)-4461;
short var_16 = (short)19435;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
