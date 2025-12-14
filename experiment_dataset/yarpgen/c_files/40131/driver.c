#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned int var_1 = 3446905444U;
unsigned int var_2 = 3643380321U;
unsigned short var_3 = (unsigned short)38763;
unsigned int var_4 = 334905709U;
signed char var_5 = (signed char)-17;
unsigned int var_6 = 3747243783U;
unsigned short var_8 = (unsigned short)14229;
unsigned short var_9 = (unsigned short)27157;
unsigned char var_10 = (unsigned char)5;
int zero = 0;
short var_11 = (short)-18673;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)-21242;
unsigned char var_14 = (unsigned char)232;
_Bool var_15 = (_Bool)0;
int var_16 = 140337175;
signed char var_17 = (signed char)-62;
unsigned short var_18 = (unsigned short)41910;
signed char var_19 = (signed char)38;
unsigned int var_20 = 2910096392U;
unsigned short var_21 = (unsigned short)8656;
unsigned int var_22 = 3673251258U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)26828;
int var_25 = 87732901;
int var_26 = 602069191;
short var_27 = (short)-10839;
signed char var_28 = (signed char)45;
signed char var_29 = (signed char)87;
signed char var_30 = (signed char)63;
unsigned int var_31 = 429417195U;
signed char var_32 = (signed char)-99;
unsigned int var_33 = 1957822964U;
signed char var_34 = (signed char)102;
signed char var_35 = (signed char)16;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
signed char arr_5 [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
int arr_7 [20] [20] [20] [20] ;
short arr_8 [20] [20] [20] ;
unsigned char arr_12 [19] [19] ;
unsigned long long int arr_13 [17] ;
signed char arr_16 [17] [17] ;
unsigned int arr_17 [17] [17] [17] ;
_Bool arr_20 [17] [17] [17] [17] ;
long long int arr_22 [17] ;
unsigned char arr_25 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)62998;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)29044;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1857152681405333439ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 7522684901425793261ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 7634340192890299209ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1294653197;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-25053;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 17370591761052213685ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 733479754U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = 5539262226145859292LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)219;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
