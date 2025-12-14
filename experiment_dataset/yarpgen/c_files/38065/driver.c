#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50646;
short var_2 = (short)-32686;
unsigned long long int var_3 = 4685916752347940684ULL;
unsigned short var_4 = (unsigned short)5608;
short var_6 = (short)10105;
unsigned long long int var_7 = 3712906148627724293ULL;
_Bool var_8 = (_Bool)1;
int var_10 = -1441138554;
unsigned short var_14 = (unsigned short)5116;
int var_15 = -1947656622;
short var_16 = (short)-20014;
int zero = 0;
short var_17 = (short)-17290;
short var_18 = (short)-32500;
int var_19 = -1175032977;
unsigned long long int var_20 = 13674729135916562156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
