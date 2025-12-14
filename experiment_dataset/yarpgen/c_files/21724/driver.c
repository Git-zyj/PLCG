#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3607925443U;
unsigned short var_5 = (unsigned short)42024;
unsigned long long int var_7 = 15864456727093890333ULL;
unsigned int var_8 = 1871725616U;
int var_9 = -1472235628;
signed char var_11 = (signed char)61;
long long int var_12 = 874054438547246458LL;
unsigned long long int var_14 = 4829922824280769415ULL;
unsigned long long int var_15 = 3285236844620818176ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)24994;
short var_18 = (short)3157;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)34445;
unsigned int var_21 = 1396956012U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1698028009U;
signed char var_24 = (signed char)-92;
short var_25 = (short)23796;
long long int var_26 = -7835090350458459044LL;
signed char var_27 = (signed char)-24;
unsigned int var_28 = 1444753405U;
long long int var_29 = -3291372125789276791LL;
short var_30 = (short)-28001;
_Bool var_31 = (_Bool)1;
unsigned long long int arr_0 [11] ;
int arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_3 [11] [11] [11] ;
unsigned short arr_4 [11] ;
signed char arr_5 [11] [11] ;
unsigned short arr_6 [11] ;
short arr_7 [11] ;
long long int arr_10 [11] ;
short arr_11 [11] [11] ;
short arr_12 [11] ;
long long int arr_17 [11] [11] [11] [11] ;
long long int arr_18 [11] [11] [11] ;
short arr_21 [11] [11] ;
unsigned long long int arr_30 [15] ;
unsigned short arr_35 [15] [15] [15] [15] ;
unsigned short arr_8 [11] [11] [11] ;
short arr_13 [11] [11] [11] [11] ;
short arr_19 [11] [11] [11] ;
signed char arr_20 [11] ;
long long int arr_24 [11] ;
unsigned short arr_28 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 15790153940068411298ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2060524979;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)58085;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)21310;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)29681;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)47866;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)28021;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 3255042798617368996LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (short)28845;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (short)26278;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -4838137947407494837LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 6158335812445704758LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-675;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = 13878256564933609623ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60918;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)10936;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)29555 : (short)-832;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)1611;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 3114026147357247309LL : 222845287475107891LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (unsigned short)49636;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
