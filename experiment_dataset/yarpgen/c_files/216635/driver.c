#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2046922365U;
unsigned short var_2 = (unsigned short)9254;
unsigned int var_3 = 304420900U;
long long int var_4 = -2726087938398492408LL;
unsigned long long int var_5 = 10584832516809634039ULL;
unsigned short var_7 = (unsigned short)30633;
signed char var_10 = (signed char)-56;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)19;
int var_17 = 1805353030;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
signed char var_20 = (signed char)-62;
unsigned long long int var_21 = 15170684880372053385ULL;
unsigned long long int var_22 = 582744458857449652ULL;
long long int arr_1 [19] ;
unsigned int arr_10 [19] ;
signed char arr_6 [19] ;
unsigned long long int arr_11 [19] ;
unsigned short arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2921246018683155820LL : 5605685076794252172LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 1208052262U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13983173878146937335ULL : 14388817352058860612ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47507 : (unsigned short)59179;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
