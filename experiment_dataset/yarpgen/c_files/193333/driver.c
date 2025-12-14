#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned short var_1 = (unsigned short)14036;
short var_3 = (short)11974;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14893039265973162472ULL;
short var_7 = (short)-21880;
signed char var_8 = (signed char)-87;
long long int var_9 = -2167416204394554085LL;
long long int var_10 = -7993990035641578584LL;
int zero = 0;
unsigned long long int var_11 = 7681789600371970463ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)1417;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
