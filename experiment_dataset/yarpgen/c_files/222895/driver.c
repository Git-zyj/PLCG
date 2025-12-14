#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1997;
short var_4 = (short)-22142;
unsigned long long int var_5 = 236109869377477275ULL;
signed char var_7 = (signed char)-10;
long long int var_11 = 4195289358546363441LL;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)105;
long long int var_16 = -7653631036928419661LL;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
short var_19 = (short)888;
unsigned int var_20 = 4110143840U;
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
