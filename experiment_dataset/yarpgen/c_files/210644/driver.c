#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12154;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-2938;
long long int var_3 = 6414684984369906406LL;
short var_4 = (short)-19286;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)227;
long long int var_15 = 7984891618219795254LL;
int zero = 0;
signed char var_17 = (signed char)74;
int var_18 = -1044378224;
unsigned long long int var_19 = 5689079737496204850ULL;
unsigned char var_20 = (unsigned char)43;
short var_21 = (short)4061;
unsigned long long int var_22 = 5828957483859969100ULL;
long long int var_23 = -6214611256209283352LL;
unsigned int var_24 = 142122551U;
unsigned long long int var_25 = 2181324436812890379ULL;
short var_26 = (short)-24504;
signed char var_27 = (signed char)-1;
_Bool var_28 = (_Bool)1;
signed char arr_0 [23] ;
unsigned long long int arr_3 [23] ;
signed char arr_6 [23] [23] [23] [23] [23] [23] ;
short arr_7 [23] ;
long long int arr_9 [23] [23] ;
unsigned char arr_10 [23] ;
long long int arr_11 [23] ;
int arr_8 [23] [23] [23] [23] ;
long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 13827728985209227258ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-13579;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -654248833070333561LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 5090617741751556838LL : -7129452513304749618LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1454866494 : 1028441563;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -8808306422453967172LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
