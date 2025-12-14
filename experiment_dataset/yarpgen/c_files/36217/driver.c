#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 357568686U;
short var_1 = (short)2778;
unsigned long long int var_3 = 4891201926515029239ULL;
signed char var_4 = (signed char)72;
unsigned long long int var_5 = 2568064327152920057ULL;
int var_6 = 482494579;
short var_7 = (short)13236;
int var_8 = -2063591780;
unsigned char var_9 = (unsigned char)170;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8800594815376585242LL;
unsigned int var_12 = 2119425201U;
unsigned int var_13 = 2271714367U;
long long int var_14 = -5777273218539933118LL;
unsigned long long int var_15 = 12673228512677072393ULL;
unsigned int var_16 = 1143215019U;
short var_17 = (short)23228;
unsigned int var_18 = 426959759U;
unsigned char var_19 = (unsigned char)228;
signed char var_20 = (signed char)20;
int var_21 = 603209689;
int var_22 = 1286978252;
unsigned int var_23 = 4221867372U;
int var_24 = 474418565;
unsigned int var_25 = 1905290251U;
unsigned int arr_0 [19] ;
short arr_1 [19] ;
short arr_3 [19] [19] ;
unsigned int arr_4 [19] ;
signed char arr_5 [19] [19] ;
int arr_6 [19] [19] ;
signed char arr_7 [19] [19] ;
signed char arr_8 [19] [19] ;
signed char arr_10 [19] ;
long long int arr_12 [19] [19] ;
int arr_16 [19] ;
unsigned int arr_20 [19] [19] [19] ;
short arr_30 [19] [19] ;
long long int arr_2 [19] ;
signed char arr_9 [19] [19] ;
unsigned long long int arr_14 [19] [19] ;
unsigned int arr_17 [19] [19] [19] ;
int arr_18 [19] [19] ;
unsigned long long int arr_22 [19] ;
short arr_23 [19] ;
unsigned int arr_24 [19] [19] ;
unsigned long long int arr_28 [19] ;
short arr_31 [19] ;
unsigned long long int arr_32 [19] [19] [19] ;
unsigned char arr_33 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3444976084U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-16582;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)7593;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 3298811906U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -520618494;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 7482047051057202749LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -1517806056;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 994213341U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (short)-6471;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2536858137901475574LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 15083923223191283044ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 2452502936U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = -807237617;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = 14478431492252134188ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (short)-12060;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = 3393771200U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 17982159143220582287ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (short)22380;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 13652091630466763809ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = (unsigned char)49;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
