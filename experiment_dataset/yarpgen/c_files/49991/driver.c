#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4376664475205652246LL;
signed char var_2 = (signed char)111;
long long int var_3 = 1938832974112392421LL;
int var_4 = 653020;
long long int var_6 = 3728997606130085975LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_11 = -305421211670029202LL;
int var_14 = 2054283162;
long long int var_15 = 1597593418430599957LL;
long long int var_16 = 4270182132288917539LL;
int zero = 0;
unsigned long long int var_17 = 3085174674050419851ULL;
unsigned long long int var_18 = 12816202478186796179ULL;
long long int var_19 = 5589264639461648097LL;
signed char var_20 = (signed char)52;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
int arr_0 [17] ;
_Bool arr_2 [17] ;
int arr_5 [17] [17] [17] ;
_Bool arr_6 [17] [17] ;
long long int arr_10 [17] [17] ;
_Bool arr_11 [17] [17] [17] ;
long long int arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1939013884;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1424061077;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 9077287185425309503LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -6616002897973207843LL : 7035139795058342514LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
