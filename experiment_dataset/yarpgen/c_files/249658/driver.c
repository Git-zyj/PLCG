#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3842318150U;
int var_10 = 1530002532;
unsigned short var_11 = (unsigned short)23706;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3649834685632205325LL;
int zero = 0;
short var_15 = (short)17430;
unsigned int var_16 = 1585960274U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2267974691706381479LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
