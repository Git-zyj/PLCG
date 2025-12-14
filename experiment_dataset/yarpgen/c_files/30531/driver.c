#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3425674123U;
unsigned long long int var_2 = 18120328899191507046ULL;
unsigned short var_3 = (unsigned short)4516;
long long int var_4 = -1140669306285642808LL;
int var_5 = -514119330;
long long int var_6 = -9192594657348664814LL;
long long int var_7 = -1413160212992381556LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-127;
signed char var_10 = (signed char)-90;
unsigned char var_12 = (unsigned char)211;
unsigned int var_14 = 2639953938U;
short var_15 = (short)8474;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-13;
unsigned short var_18 = (unsigned short)48893;
signed char var_19 = (signed char)103;
unsigned int var_20 = 2858019699U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)13;
long long int var_23 = -2007273654159883538LL;
unsigned char var_24 = (unsigned char)208;
long long int var_25 = 3918737590136190559LL;
signed char var_26 = (signed char)59;
unsigned long long int var_27 = 13147019095696876357ULL;
signed char var_28 = (signed char)61;
int var_29 = 86843482;
signed char var_30 = (signed char)93;
long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
signed char arr_2 [13] [13] ;
short arr_3 [13] [13] [13] ;
unsigned int arr_6 [13] ;
unsigned int arr_7 [13] [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] [13] ;
long long int arr_9 [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] ;
unsigned char arr_11 [13] [13] [13] [13] ;
int arr_16 [13] ;
unsigned short arr_4 [13] ;
long long int arr_12 [13] ;
unsigned int arr_19 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7551551224649096702LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3524180888U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-3303;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 219681291U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3597097455U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -8947274442212825024LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 12973888200007912054ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = -612090944;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)10688;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 3375883041547657445LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 1866651058U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
