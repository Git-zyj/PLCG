#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
unsigned int var_1 = 2085691209U;
unsigned long long int var_2 = 9294465664346010244ULL;
signed char var_3 = (signed char)28;
signed char var_4 = (signed char)-29;
long long int var_7 = -1704689506070499935LL;
long long int var_8 = -6513330750054805028LL;
unsigned int var_9 = 1769518710U;
int zero = 0;
long long int var_10 = 392447247406272561LL;
int var_11 = -128710271;
int var_12 = -2059873328;
long long int var_13 = -4541870381608866590LL;
int var_14 = -1435153720;
unsigned long long int arr_1 [13] ;
long long int arr_4 [24] ;
_Bool arr_5 [24] ;
long long int arr_8 [24] ;
short arr_3 [13] ;
short arr_6 [24] ;
unsigned short arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 10623733325176744701ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2973700831842451607LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 3926335030713516936LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-12018 : (short)317;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-23145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)59967;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
