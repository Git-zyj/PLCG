#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
long long int var_1 = -5465444144793481846LL;
unsigned char var_2 = (unsigned char)61;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)62;
unsigned int var_7 = 3522620873U;
unsigned long long int var_8 = 10657192206203348665ULL;
unsigned int var_10 = 3546262299U;
signed char var_11 = (signed char)-127;
signed char var_12 = (signed char)-89;
int var_13 = 1719050863;
int var_14 = -946792452;
unsigned char var_16 = (unsigned char)232;
int zero = 0;
signed char var_18 = (signed char)-38;
unsigned int var_19 = 2073373114U;
short var_20 = (short)-19838;
unsigned char var_21 = (unsigned char)99;
unsigned long long int var_22 = 15823830156715450302ULL;
_Bool var_23 = (_Bool)0;
int arr_0 [10] ;
signed char arr_2 [10] [10] ;
unsigned int arr_4 [10] [10] [10] [10] ;
unsigned char arr_7 [10] ;
signed char arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1208486359;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2034539220U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
