#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1590393725;
signed char var_4 = (signed char)-9;
long long int var_5 = 2257524484899046488LL;
unsigned long long int var_6 = 8084025226749161227ULL;
short var_7 = (short)1384;
unsigned char var_10 = (unsigned char)192;
unsigned char var_11 = (unsigned char)154;
unsigned char var_12 = (unsigned char)221;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)247;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-12977;
long long int arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
signed char arr_2 [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -2884546517561420301LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
