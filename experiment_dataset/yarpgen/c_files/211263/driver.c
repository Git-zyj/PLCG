#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3298102124U;
unsigned int var_3 = 771976460U;
unsigned int var_4 = 2379300886U;
unsigned int var_5 = 3973348600U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3433319605322800018LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 5098291263152081017LL;
unsigned char var_15 = (unsigned char)83;
long long int var_16 = 3322200925138997110LL;
int zero = 0;
long long int var_17 = -1315893561904745792LL;
_Bool var_18 = (_Bool)1;
int var_19 = 394556704;
int var_20 = -1084011760;
unsigned char arr_6 [21] ;
short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-15329;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
