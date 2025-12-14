#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)21310;
unsigned short var_5 = (unsigned short)29480;
unsigned long long int var_7 = 7624814358935933052ULL;
int zero = 0;
long long int var_12 = 1027671351275070295LL;
long long int var_13 = 1652577854511708906LL;
unsigned int var_14 = 1641455109U;
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
