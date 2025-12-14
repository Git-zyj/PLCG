#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3877169884715480544LL;
signed char var_3 = (signed char)100;
unsigned char var_4 = (unsigned char)204;
unsigned short var_5 = (unsigned short)6970;
signed char var_6 = (signed char)-90;
unsigned long long int var_11 = 16044691129644513978ULL;
short var_12 = (short)6958;
long long int var_15 = 2115922238205141572LL;
signed char var_17 = (signed char)32;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1018148929U;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7466358290540176595LL;
unsigned long long int var_23 = 1393954967172985593ULL;
unsigned long long int var_24 = 11371316768488057896ULL;
long long int var_25 = 4790572491663476387LL;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)6;
_Bool var_28 = (_Bool)1;
unsigned char arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_2 [13] [13] ;
int arr_3 [13] ;
signed char arr_4 [13] [13] [13] ;
_Bool arr_5 [13] [13] [13] ;
unsigned int arr_6 [13] ;
signed char arr_8 [11] ;
long long int arr_11 [11] [11] [11] ;
long long int arr_14 [11] [11] [11] ;
unsigned char arr_16 [11] [11] [11] [11] [11] [11] ;
long long int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 979436503 : -1280675082;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2081109986U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-25 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -2117710932499868070LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8652147318351873881LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -8193984647105688954LL : 1474867143611622667LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
