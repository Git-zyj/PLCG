#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2547;
long long int var_6 = 6211220183892028376LL;
_Bool var_9 = (_Bool)1;
int var_10 = 815453865;
short var_12 = (short)6410;
long long int var_14 = 8242683041944136954LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4656358018574187882LL;
int var_17 = 1970392226;
signed char var_18 = (signed char)122;
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
