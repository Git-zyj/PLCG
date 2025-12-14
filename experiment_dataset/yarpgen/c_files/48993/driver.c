#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12549116180096458477ULL;
unsigned int var_2 = 2260817145U;
signed char var_4 = (signed char)-116;
unsigned int var_5 = 4241812075U;
signed char var_7 = (signed char)-125;
unsigned int var_9 = 2989294421U;
int var_11 = -269512906;
signed char var_12 = (signed char)-94;
int zero = 0;
signed char var_14 = (signed char)54;
unsigned char var_15 = (unsigned char)227;
int var_16 = 317476658;
int var_17 = 57592435;
signed char var_18 = (signed char)-29;
unsigned long long int var_19 = 7813820542534491325ULL;
signed char var_20 = (signed char)69;
_Bool var_21 = (_Bool)1;
int var_22 = 1592219038;
unsigned long long int var_23 = 564249780933455751ULL;
unsigned char var_24 = (unsigned char)198;
unsigned long long int var_25 = 17757577596129863940ULL;
unsigned int arr_0 [12] [12] ;
signed char arr_1 [12] ;
unsigned long long int arr_3 [13] ;
int arr_4 [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] ;
int arr_7 [13] ;
unsigned char arr_10 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2957438016U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2851441450186703350ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -751008482;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 4774741823681753591ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 1538361533;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)114;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
