#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2015033896466811012LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 9689344841901223135ULL;
unsigned char var_11 = (unsigned char)45;
int zero = 0;
unsigned char var_12 = (unsigned char)152;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)239;
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
