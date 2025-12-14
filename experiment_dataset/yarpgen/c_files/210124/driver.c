#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)71;
int var_3 = 853477219;
unsigned char var_9 = (unsigned char)189;
unsigned short var_11 = (unsigned short)55275;
long long int var_12 = -5334978176721833954LL;
unsigned long long int var_13 = 3966109999674323820ULL;
unsigned long long int var_14 = 12515959863369704984ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)16040;
unsigned long long int var_21 = 1686407040198309452ULL;
signed char var_22 = (signed char)122;
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
