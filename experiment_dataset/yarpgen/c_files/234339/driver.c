#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -264215023326610314LL;
short var_5 = (short)-2761;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned char var_17 = (unsigned char)244;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)43048;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 11736946447434270521ULL;
unsigned short var_23 = (unsigned short)10928;
long long int var_24 = 8595530861405737182LL;
int arr_0 [13] [13] ;
int arr_1 [13] [13] ;
unsigned long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -179544055 : 1239996141;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -573538903 : -2084322078;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 5302805843509168196ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
