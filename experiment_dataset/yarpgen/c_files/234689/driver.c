#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 17667447893427120306ULL;
short var_6 = (short)5292;
short var_8 = (short)934;
long long int var_9 = 7874954361160846476LL;
unsigned int var_10 = 2804262644U;
unsigned long long int var_11 = 10065058313378020257ULL;
unsigned long long int var_12 = 10619618457996142145ULL;
int zero = 0;
short var_13 = (short)28639;
unsigned int var_14 = 1100095211U;
unsigned long long int var_15 = 13585475791132101857ULL;
long long int var_16 = 4950993076508388839LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
