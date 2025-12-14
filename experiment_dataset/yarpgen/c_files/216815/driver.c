#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31859;
long long int var_2 = -2159247080614163965LL;
unsigned short var_3 = (unsigned short)13178;
unsigned short var_4 = (unsigned short)51239;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-13500;
signed char var_7 = (signed char)34;
unsigned short var_8 = (unsigned short)11225;
int var_9 = -1839581315;
int var_11 = -1621900100;
unsigned int var_14 = 2430654502U;
int zero = 0;
unsigned short var_15 = (unsigned short)22557;
unsigned int var_16 = 2904346384U;
short var_17 = (short)18559;
unsigned char var_18 = (unsigned char)70;
unsigned int var_19 = 1698713023U;
unsigned short var_20 = (unsigned short)26058;
short var_21 = (short)31657;
short var_22 = (short)4831;
signed char var_23 = (signed char)-34;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [19] ;
signed char arr_1 [19] ;
unsigned short arr_2 [19] ;
int arr_3 [19] ;
unsigned int arr_4 [19] [19] [19] ;
long long int arr_5 [19] ;
signed char arr_6 [19] [19] [19] [19] ;
signed char arr_13 [19] ;
unsigned char arr_9 [19] [19] [19] [19] ;
unsigned long long int arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)3489;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 588996953;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3479898183U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -7086197052166613182LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 8134850280550456140ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
