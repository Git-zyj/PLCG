#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16409;
unsigned short var_1 = (unsigned short)57805;
unsigned short var_2 = (unsigned short)36852;
signed char var_4 = (signed char)45;
short var_5 = (short)14946;
long long int var_6 = -4084928636822005893LL;
short var_7 = (short)-20849;
unsigned short var_8 = (unsigned short)17744;
_Bool var_9 = (_Bool)1;
int var_10 = -1714271800;
long long int var_11 = 4021487844454618901LL;
long long int var_12 = 6459900671281539813LL;
int zero = 0;
unsigned long long int var_13 = 14519006385883468925ULL;
short var_14 = (short)-24530;
short var_15 = (short)-30622;
unsigned short var_16 = (unsigned short)16587;
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
