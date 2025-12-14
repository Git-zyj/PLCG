#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3551140489U;
short var_1 = (short)3166;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3929933164082437230LL;
unsigned long long int var_4 = 5746877273776824898ULL;
unsigned long long int var_6 = 7201053670011580785ULL;
unsigned short var_10 = (unsigned short)37544;
int var_12 = 1186735205;
unsigned long long int var_13 = 9102993999957752609ULL;
unsigned long long int var_14 = 16111634266492840437ULL;
unsigned short var_16 = (unsigned short)52668;
unsigned long long int var_17 = 2520649527699593590ULL;
unsigned int var_19 = 3045997542U;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
signed char var_21 = (signed char)38;
long long int var_22 = 3856697190655968504LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
