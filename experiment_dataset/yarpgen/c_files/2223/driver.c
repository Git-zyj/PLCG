#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
short var_1 = (short)27539;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_5 = 7939304962004157243ULL;
unsigned char var_6 = (unsigned char)170;
unsigned int var_7 = 817235334U;
int var_8 = -815042140;
signed char var_9 = (signed char)27;
unsigned char var_11 = (unsigned char)158;
unsigned short var_13 = (unsigned short)38449;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)254;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-112;
signed char var_20 = (signed char)61;
_Bool var_21 = (_Bool)1;
short var_22 = (short)8362;
unsigned char var_23 = (unsigned char)206;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned int arr_2 [19] [19] [19] ;
_Bool arr_3 [19] ;
unsigned long long int arr_5 [19] [19] [19] ;
unsigned char arr_7 [19] [19] [19] ;
_Bool arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 292828014U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7973564281267114254ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 657294321U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8941552350057861497ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
