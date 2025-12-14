#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 2985842269851940959ULL;
unsigned short var_5 = (unsigned short)31692;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)3391;
int var_14 = -1077862592;
int var_16 = -1619989593;
int zero = 0;
unsigned int var_18 = 1241375584U;
short var_19 = (short)16602;
unsigned short var_20 = (unsigned short)31170;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
