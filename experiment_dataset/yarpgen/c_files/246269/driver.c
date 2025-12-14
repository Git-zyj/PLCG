#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9088606650169860986LL;
unsigned int var_1 = 3930727147U;
unsigned char var_2 = (unsigned char)113;
unsigned short var_3 = (unsigned short)27513;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2749930865739283853ULL;
signed char var_6 = (signed char)-3;
unsigned char var_7 = (unsigned char)57;
unsigned long long int var_8 = 9293010987063107053ULL;
long long int var_9 = -813212807949640617LL;
unsigned char var_10 = (unsigned char)31;
int zero = 0;
unsigned long long int var_11 = 1063334606350141859ULL;
int var_12 = -129289174;
signed char var_13 = (signed char)86;
unsigned long long int var_14 = 6279158423452417242ULL;
long long int var_15 = -7699056067430657553LL;
unsigned char var_16 = (unsigned char)148;
unsigned short var_17 = (unsigned short)1570;
unsigned long long int var_18 = 17224155469173652418ULL;
unsigned short var_19 = (unsigned short)58993;
unsigned short var_20 = (unsigned short)51800;
int var_21 = -1606329891;
unsigned char var_22 = (unsigned char)158;
unsigned int var_23 = 369324323U;
unsigned char var_24 = (unsigned char)214;
unsigned int arr_0 [23] ;
unsigned short arr_4 [23] [23] ;
signed char arr_5 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
signed char arr_15 [23] [23] [23] ;
long long int arr_17 [23] [23] ;
unsigned short arr_18 [23] [23] [23] ;
unsigned short arr_21 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_22 [23] [23] ;
unsigned short arr_23 [23] ;
signed char arr_27 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3353504233U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)63797;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -2898901593872837006LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = -3321680145912883878LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)9702;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)7265 : (unsigned short)50053;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = 11237810931049026329ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50541 : (unsigned short)52943;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
