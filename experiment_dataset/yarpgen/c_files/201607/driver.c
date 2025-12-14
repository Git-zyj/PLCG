#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned long long int var_1 = 5396775132869544959ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 11956766166432261132ULL;
unsigned char var_5 = (unsigned char)112;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13048120619344082240ULL;
signed char var_9 = (signed char)66;
unsigned char var_10 = (unsigned char)61;
int var_11 = -767983759;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13290541405793903007ULL;
int zero = 0;
signed char var_14 = (signed char)-8;
unsigned long long int var_15 = 708154118695070367ULL;
signed char var_16 = (signed char)29;
unsigned char var_17 = (unsigned char)54;
unsigned long long int var_18 = 1845199986855329509ULL;
unsigned int var_19 = 649652817U;
int var_20 = 977126291;
unsigned char var_21 = (unsigned char)72;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)164;
long long int var_24 = 7562423288122075658LL;
int var_25 = 728961663;
unsigned char var_26 = (unsigned char)83;
short var_27 = (short)-11855;
signed char arr_0 [13] ;
signed char arr_1 [13] ;
signed char arr_3 [13] [13] [13] ;
unsigned char arr_4 [13] [13] ;
signed char arr_7 [13] [13] [13] [13] ;
signed char arr_9 [25] [25] ;
int arr_10 [25] ;
unsigned char arr_12 [25] [25] ;
int arr_13 [25] [25] ;
int arr_15 [25] ;
unsigned long long int arr_19 [25] [25] [25] ;
int arr_20 [25] [25] [25] [25] [25] [25] ;
signed char arr_2 [13] ;
unsigned char arr_14 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = -1997339908;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = 677046999;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 774724869;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 4325497040651948788ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 672772402;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)210;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
