#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5761485427260533135ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_11 = (unsigned short)62548;
unsigned int var_14 = 211777180U;
unsigned short var_15 = (unsigned short)52967;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -1918494551666318272LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 856019794U;
int var_22 = 43204402;
long long int arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned long long int arr_3 [21] [21] ;
int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -2607235195074666995LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 11498677951322441971ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -2107597630;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
