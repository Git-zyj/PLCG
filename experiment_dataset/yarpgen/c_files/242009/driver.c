#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7835210398855868915LL;
unsigned int var_6 = 588944595U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3293287002U;
unsigned char var_11 = (unsigned char)197;
long long int var_12 = -1315419172798277090LL;
int zero = 0;
signed char var_14 = (signed char)-2;
unsigned long long int var_15 = 5910130551292348808ULL;
unsigned char var_16 = (unsigned char)223;
unsigned short var_17 = (unsigned short)144;
int arr_0 [17] [17] ;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
long long int arr_3 [17] ;
int arr_5 [17] ;
int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1289894551;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26410;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 648465914U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -2279108850069141914LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1271757532;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 1400040947;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
