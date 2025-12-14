#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-8580;
long long int var_11 = 5166678454304008644LL;
int var_13 = 2138438499;
int zero = 0;
unsigned short var_15 = (unsigned short)21387;
long long int var_16 = -6838992301303451663LL;
unsigned short var_17 = (unsigned short)38914;
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
