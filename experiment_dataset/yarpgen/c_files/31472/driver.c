#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1917568035U;
short var_3 = (short)20922;
long long int var_4 = 3731107761740519045LL;
unsigned char var_5 = (unsigned char)211;
unsigned long long int var_6 = 11969635497485591503ULL;
signed char var_7 = (signed char)109;
unsigned int var_8 = 600673682U;
long long int var_9 = -5740756876258104273LL;
unsigned long long int var_10 = 8648554330071112213ULL;
unsigned short var_13 = (unsigned short)50592;
int zero = 0;
short var_14 = (short)-21322;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)18854;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
