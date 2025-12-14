#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
int var_1 = 950282185;
short var_4 = (short)32541;
short var_6 = (short)26148;
long long int var_13 = 6765553500377674223LL;
short var_15 = (short)4245;
int zero = 0;
long long int var_18 = 5443502071069994084LL;
unsigned char var_19 = (unsigned char)80;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1718861531U;
unsigned int var_22 = 2369529824U;
long long int var_23 = 1950720844818521457LL;
int var_24 = -1618831041;
int var_25 = 1672040030;
unsigned char var_26 = (unsigned char)90;
unsigned long long int var_27 = 6058438062634522514ULL;
short var_28 = (short)-22507;
signed char var_29 = (signed char)-77;
signed char var_30 = (signed char)19;
short var_31 = (short)-7567;
short var_32 = (short)-9122;
_Bool arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
_Bool arr_3 [20] ;
short arr_4 [20] [20] ;
int arr_5 [20] [20] ;
_Bool arr_7 [20] ;
short arr_10 [20] [20] ;
short arr_8 [20] ;
_Bool arr_11 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4656553550432185867ULL : 9604312927967894567ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 7522296195330708233ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-8933;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -2104886946;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-30374;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)-28871;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
