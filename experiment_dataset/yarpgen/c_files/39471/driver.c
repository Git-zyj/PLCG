#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2459110731U;
short var_5 = (short)-26257;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 2049967469U;
unsigned long long int var_12 = 7579430622939497122ULL;
long long int var_13 = 5358380812962599979LL;
unsigned short var_15 = (unsigned short)5939;
int zero = 0;
unsigned short var_19 = (unsigned short)38596;
long long int var_20 = 4476086660404660413LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
