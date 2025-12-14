#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17220865991035249547ULL;
short var_1 = (short)14083;
long long int var_2 = -9182468342931036659LL;
unsigned int var_5 = 1100589234U;
int var_6 = -122595511;
long long int var_7 = -949797567243386128LL;
unsigned int var_10 = 4135177968U;
unsigned short var_16 = (unsigned short)47102;
long long int var_17 = -7983099202698261384LL;
long long int var_18 = -6353939821674227821LL;
int zero = 0;
unsigned int var_19 = 1985208033U;
unsigned short var_20 = (unsigned short)37379;
short var_21 = (short)5207;
unsigned int var_22 = 2259087349U;
int var_23 = 109349298;
long long int var_24 = -6732236643604287601LL;
unsigned int var_25 = 1021897552U;
unsigned int var_26 = 1047232378U;
unsigned int var_27 = 1050427556U;
int arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_4 [18] ;
unsigned int arr_5 [18] ;
unsigned short arr_6 [18] ;
long long int arr_9 [18] [18] [18] ;
unsigned int arr_12 [18] [18] [18] ;
int arr_14 [12] ;
long long int arr_17 [12] ;
long long int arr_18 [12] [12] [12] [12] ;
unsigned short arr_2 [13] ;
long long int arr_3 [13] ;
unsigned short arr_20 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 433284647 : 1036892942;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)4795;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)33223;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 409378588U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)44069;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 5487212729323270164LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1613852391U : 1490025133U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 971892466;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = -8100620304361259819LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -3366381515825928153LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14649 : (unsigned short)50069;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3833845933090260000LL : -6021277408285387801LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (unsigned short)50887;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
