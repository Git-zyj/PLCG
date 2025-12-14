#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25506;
int var_2 = 511699652;
long long int var_3 = 6956756128405669734LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_6 = -265316541;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)33613;
short var_10 = (short)5776;
unsigned int var_12 = 1318006491U;
long long int var_13 = 7029490899077408879LL;
unsigned int var_14 = 4263357389U;
int zero = 0;
unsigned short var_15 = (unsigned short)32873;
unsigned int var_16 = 1585519511U;
int var_17 = 705587909;
int var_18 = -2054057119;
int var_19 = 2015821939;
signed char var_20 = (signed char)36;
unsigned char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
signed char arr_2 [16] ;
signed char arr_3 [16] ;
unsigned short arr_5 [16] ;
signed char arr_6 [16] [16] [16] ;
unsigned int arr_7 [16] ;
unsigned int arr_10 [16] [16] [16] [16] ;
int arr_11 [16] [16] [16] [16] [16] [16] ;
int arr_13 [16] [16] [16] [16] ;
_Bool arr_9 [16] ;
unsigned short arr_16 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3319780137949460895ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)48835;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 4047241927U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 412571688U : 1306311333U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 269395859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -852694394 : 1435834691;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)36709 : (unsigned short)52003;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
