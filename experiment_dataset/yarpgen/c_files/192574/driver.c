#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 107977081U;
int var_1 = -872381497;
unsigned long long int var_4 = 14695329609554810486ULL;
signed char var_6 = (signed char)-74;
int var_7 = 809850777;
short var_8 = (short)-3037;
int var_9 = 781681023;
unsigned short var_10 = (unsigned short)41020;
unsigned int var_11 = 3737556152U;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned short var_14 = (unsigned short)23259;
unsigned short var_15 = (unsigned short)40525;
long long int var_16 = -416602377047407099LL;
signed char var_17 = (signed char)-107;
int var_18 = -537062717;
unsigned short var_19 = (unsigned short)37110;
long long int var_20 = 1285620028998365128LL;
unsigned int var_21 = 354741544U;
unsigned int var_22 = 390607714U;
unsigned int var_23 = 2158656112U;
unsigned short arr_0 [15] ;
long long int arr_1 [15] ;
unsigned short arr_6 [13] ;
unsigned int arr_9 [23] [23] ;
unsigned int arr_13 [24] ;
unsigned long long int arr_15 [24] ;
unsigned long long int arr_16 [24] [24] ;
unsigned int arr_17 [24] [24] [24] ;
unsigned short arr_2 [15] ;
long long int arr_11 [23] [23] ;
unsigned short arr_12 [23] ;
unsigned short arr_19 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)18623;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -2442153473677406996LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)8726;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 841363201U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 3996698602U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 14260606981802832564ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = 15549970059677786173ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 3940063705U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)7862;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = -7174839492307047645LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)43001;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)50469;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
