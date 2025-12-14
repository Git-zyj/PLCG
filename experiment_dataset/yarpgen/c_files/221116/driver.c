#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2627496606282190228LL;
long long int var_2 = 5991053029463107106LL;
signed char var_5 = (signed char)-21;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-40;
int var_15 = -552493943;
int zero = 0;
signed char var_19 = (signed char)-117;
signed char var_20 = (signed char)-6;
signed char var_21 = (signed char)-116;
_Bool var_22 = (_Bool)1;
int var_23 = -113941055;
long long int var_24 = 6901108555182483692LL;
signed char var_25 = (signed char)-78;
signed char var_26 = (signed char)34;
int arr_1 [16] ;
_Bool arr_5 [20] ;
_Bool arr_6 [20] [20] ;
signed char arr_8 [20] [20] ;
int arr_4 [16] ;
long long int arr_13 [16] ;
int arr_14 [16] ;
_Bool arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1436168468 : -438051252;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1369030857 : 1049579118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 7609510878700481005LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 1273368755;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
