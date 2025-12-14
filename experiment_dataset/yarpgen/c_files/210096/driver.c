#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_11 = -5071522523979485777LL;
int var_12 = 1155455092;
long long int var_13 = -3370748923369776410LL;
long long int var_14 = -8672156860482600720LL;
int var_15 = 478331532;
int var_16 = 876871500;
long long int var_17 = -7492125205179082265LL;
long long int var_18 = 3253666457780277374LL;
long long int var_19 = -2385315333497592255LL;
int var_20 = 859809797;
int arr_4 [22] [22] ;
long long int arr_5 [22] ;
int arr_6 [22] ;
long long int arr_18 [13] ;
long long int arr_22 [13] ;
long long int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -236877860;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 4967932651816543678LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -783410350;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 8598753203548206392LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 3061951612440266411LL : -941433166812461903LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 7833087077076776268LL : 276874000253225382LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
