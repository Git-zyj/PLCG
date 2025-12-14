#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-663;
int var_8 = -711241095;
long long int var_13 = 3301117410155603737LL;
_Bool var_14 = (_Bool)1;
int var_16 = 110213357;
short var_17 = (short)-13390;
int zero = 0;
unsigned int var_20 = 3662633309U;
long long int var_21 = -3017384404415402446LL;
long long int var_22 = 1592600004474714753LL;
int var_23 = -781088312;
signed char var_24 = (signed char)-104;
unsigned int var_25 = 3602828522U;
int var_26 = -2060838858;
unsigned int var_27 = 3246512899U;
int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1784243281;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1837297585U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
