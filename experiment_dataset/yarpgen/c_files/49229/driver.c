#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16072653460685481927ULL;
long long int var_2 = 6143819117789902025LL;
unsigned short var_3 = (unsigned short)18562;
long long int var_4 = 8761103935677052524LL;
long long int var_6 = 4368610943368284340LL;
long long int var_7 = -7616753044183929427LL;
long long int var_8 = -2066518316972577919LL;
long long int var_10 = 3583809332102177099LL;
int zero = 0;
signed char var_12 = (signed char)45;
unsigned short var_13 = (unsigned short)29806;
signed char var_14 = (signed char)-3;
signed char var_15 = (signed char)-123;
short var_16 = (short)-7969;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8999370825190160032ULL;
unsigned int var_20 = 1890933977U;
unsigned char var_21 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
