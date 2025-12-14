#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)921;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)178;
unsigned int var_4 = 1920806534U;
short var_5 = (short)-11667;
short var_6 = (short)24550;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 18399199267989283978ULL;
int zero = 0;
short var_11 = (short)24450;
long long int var_12 = 8033891376029303248LL;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 2120694077U;
unsigned int var_15 = 3229317964U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
