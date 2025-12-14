#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3386053396352094544LL;
signed char var_3 = (signed char)-49;
long long int var_4 = -435314406132651573LL;
long long int var_7 = 6390015633973358514LL;
unsigned char var_9 = (unsigned char)27;
short var_12 = (short)-6982;
unsigned long long int var_13 = 14946891333136927560ULL;
long long int var_14 = 9016849214153852046LL;
unsigned short var_15 = (unsigned short)13190;
int zero = 0;
signed char var_18 = (signed char)109;
signed char var_19 = (signed char)91;
_Bool var_20 = (_Bool)0;
short var_21 = (short)14884;
long long int var_22 = 1658016612334177339LL;
unsigned long long int var_23 = 14276696138132677638ULL;
signed char var_24 = (signed char)-27;
int var_25 = -1125471393;
long long int var_26 = -6970986012096732143LL;
short var_27 = (short)-18077;
unsigned int arr_1 [18] [18] ;
int arr_2 [18] ;
int arr_3 [18] ;
short arr_4 [18] [18] [18] ;
signed char arr_9 [15] [15] ;
unsigned short arr_11 [15] [15] ;
unsigned short arr_14 [17] ;
unsigned long long int arr_24 [12] ;
unsigned short arr_6 [18] ;
_Bool arr_7 [18] [18] ;
long long int arr_8 [18] ;
unsigned short arr_12 [15] ;
_Bool arr_16 [17] ;
_Bool arr_17 [17] ;
long long int arr_22 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2909606856U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -668041385;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 435014508;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)7805;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)35584;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (unsigned short)38447;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 2930543880711300593ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)32730;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -567440350818860150LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned short)4792;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 6937454503485684832LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
