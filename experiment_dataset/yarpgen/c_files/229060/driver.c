#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)4063;
long long int var_11 = -7875906211902661584LL;
int zero = 0;
unsigned int var_16 = 1954587998U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13226154828794160214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
