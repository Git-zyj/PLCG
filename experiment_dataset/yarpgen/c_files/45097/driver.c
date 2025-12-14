#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 220503012397018823ULL;
short var_3 = (short)28048;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 241841851U;
unsigned long long int var_6 = 9197498978658987028ULL;
unsigned int var_8 = 2584031922U;
unsigned long long int var_10 = 13989375563097104901ULL;
unsigned long long int var_11 = 9155717660316016630ULL;
unsigned int var_12 = 3190471584U;
signed char var_13 = (signed char)110;
unsigned short var_15 = (unsigned short)16991;
int zero = 0;
unsigned char var_16 = (unsigned char)72;
unsigned int var_17 = 3717138271U;
unsigned long long int var_18 = 864930164991912347ULL;
unsigned short var_19 = (unsigned short)12395;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
