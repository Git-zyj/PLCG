#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
long long int var_12 = -4250698245964185189LL;
unsigned long long int var_18 = 978158949878400877ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 1153664277903410866ULL;
long long int var_21 = -809662748758717166LL;
long long int var_22 = -642736270116642261LL;
unsigned int var_23 = 3723462544U;
unsigned int var_24 = 1354067281U;
signed char var_25 = (signed char)19;
int var_26 = 636680378;
int var_27 = -69722442;
unsigned long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_3 [13] ;
int arr_6 [22] ;
short arr_10 [22] ;
long long int arr_13 [22] [22] [22] ;
_Bool arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4582385207525159533ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 705440747U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 9695477781768014385ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 409516478 : 728425693;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-14590;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6745584464569094808LL : -5887624475369337474LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
