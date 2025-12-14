#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64259;
int var_1 = -1029540023;
int var_2 = -2002168063;
int var_3 = -335940163;
unsigned long long int var_6 = 507580338564192935ULL;
unsigned long long int var_7 = 18232033977452851090ULL;
unsigned long long int var_8 = 11841806763400499551ULL;
unsigned long long int var_9 = 18195808366474412928ULL;
int var_10 = 1844083937;
int var_11 = 1492497427;
int var_12 = -651856260;
int var_13 = -1775642554;
int var_14 = -1538351915;
int zero = 0;
unsigned long long int var_15 = 11235195989437926656ULL;
unsigned long long int var_16 = 7493726715316296421ULL;
unsigned long long int var_17 = 2349718456084449766ULL;
int var_18 = -21647696;
unsigned short var_19 = (unsigned short)24611;
unsigned short var_20 = (unsigned short)29109;
unsigned short var_21 = (unsigned short)55850;
unsigned long long int var_22 = 2402214008536313257ULL;
int var_23 = 1019203920;
int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
int arr_5 [23] ;
int arr_2 [21] ;
int arr_8 [23] [23] ;
int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -98015639;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7059306501345786224ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1384539490;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7845479394191281277ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 974851201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1582420434;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -476061740;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -936636802;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
