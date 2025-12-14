#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-19231;
long long int var_4 = -3622782278756420800LL;
short var_6 = (short)-143;
unsigned short var_10 = (unsigned short)38091;
int zero = 0;
unsigned short var_12 = (unsigned short)22024;
unsigned int var_13 = 3245522657U;
unsigned short var_14 = (unsigned short)50224;
unsigned long long int var_15 = 9779246841671700117ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
