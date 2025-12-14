#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1806093844U;
unsigned short var_2 = (unsigned short)31157;
unsigned long long int var_3 = 14805116390757061008ULL;
_Bool var_4 = (_Bool)1;
short var_9 = (short)7881;
unsigned char var_11 = (unsigned char)58;
unsigned long long int var_12 = 2424250787112012064ULL;
unsigned int var_13 = 3589794806U;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-22801;
unsigned long long int var_18 = 9494281392365935988ULL;
unsigned int var_19 = 3046019591U;
unsigned long long int var_20 = 2228863479365033486ULL;
unsigned long long int var_21 = 13332883060145926257ULL;
int var_22 = -147459956;
unsigned char var_23 = (unsigned char)7;
unsigned char var_24 = (unsigned char)69;
unsigned int var_25 = 3971425026U;
unsigned long long int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
_Bool arr_3 [12] [12] ;
int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
unsigned char arr_6 [12] [12] [12] ;
unsigned long long int arr_7 [12] [12] ;
unsigned short arr_10 [12] [12] [12] [12] [12] [12] ;
signed char arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2786472557685558935ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -583259442;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 9853311178672375986ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 15117367361981788579ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)5858;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)-69;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
