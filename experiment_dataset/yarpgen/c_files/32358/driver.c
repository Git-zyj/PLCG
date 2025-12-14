#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1292736109U;
signed char var_4 = (signed char)99;
unsigned int var_5 = 1777814593U;
unsigned char var_7 = (unsigned char)193;
short var_11 = (short)-532;
int zero = 0;
unsigned int var_12 = 701571031U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6751087812162438256ULL;
short var_15 = (short)3003;
signed char var_16 = (signed char)-98;
long long int var_17 = 9126807606846355144LL;
_Bool arr_2 [21] ;
signed char arr_3 [21] ;
unsigned long long int arr_6 [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 14902146525597881925ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
