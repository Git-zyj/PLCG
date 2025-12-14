#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)211;
short var_5 = (short)-11403;
short var_9 = (short)-29166;
long long int var_10 = 7179802109815843463LL;
short var_11 = (short)-382;
_Bool var_12 = (_Bool)0;
int var_13 = -173534651;
long long int var_14 = -6165021485181886589LL;
long long int var_15 = -3785386373760579013LL;
int zero = 0;
unsigned long long int var_19 = 12758326012344720631ULL;
long long int var_20 = 3730650057551394663LL;
void init() {
}

void checksum() {
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
