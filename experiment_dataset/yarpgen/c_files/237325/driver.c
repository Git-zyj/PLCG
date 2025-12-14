#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42233;
unsigned short var_2 = (unsigned short)44683;
long long int var_3 = 7802009979264352141LL;
short var_5 = (short)14198;
long long int var_8 = -2821370627489661428LL;
unsigned long long int var_10 = 17836272166079682751ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-13;
signed char var_14 = (signed char)119;
unsigned char var_15 = (unsigned char)105;
short var_16 = (short)-32182;
short var_17 = (short)22541;
long long int var_18 = -2949903470813397844LL;
unsigned short var_19 = (unsigned short)331;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char arr_0 [18] ;
short arr_1 [18] ;
unsigned short arr_6 [24] [24] ;
short arr_9 [24] ;
long long int arr_10 [24] ;
short arr_11 [24] ;
unsigned short arr_14 [13] ;
long long int arr_12 [24] ;
long long int arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-3802;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)26401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)23047;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -8694671323787270317LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)-21529;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)31291;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 4872408879400358083LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = -4322135169554174926LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
