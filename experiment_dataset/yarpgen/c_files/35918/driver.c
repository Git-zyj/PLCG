#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1532019500U;
unsigned char var_2 = (unsigned char)14;
unsigned short var_4 = (unsigned short)30526;
unsigned long long int var_8 = 3709846654984627321ULL;
unsigned int var_13 = 1057658389U;
unsigned short var_16 = (unsigned short)9482;
short var_17 = (short)14056;
int zero = 0;
unsigned short var_19 = (unsigned short)22166;
signed char var_20 = (signed char)-31;
_Bool var_21 = (_Bool)1;
int var_22 = 1785727234;
unsigned short var_23 = (unsigned short)46943;
unsigned int var_24 = 907483861U;
unsigned int var_25 = 2636896683U;
short var_26 = (short)-31107;
unsigned short var_27 = (unsigned short)18123;
signed char var_28 = (signed char)-46;
long long int var_29 = -5505442864688673922LL;
unsigned long long int var_30 = 675298330861947770ULL;
signed char var_31 = (signed char)19;
int var_32 = -287340168;
unsigned int var_33 = 539110162U;
int var_34 = 1608700639;
long long int var_35 = 6216364881937972730LL;
long long int arr_2 [19] [19] ;
unsigned int arr_5 [19] [19] [19] ;
int arr_6 [19] [19] [19] [19] ;
unsigned short arr_8 [19] [19] [19] [19] [19] ;
short arr_15 [19] [19] [19] [19] [19] ;
unsigned char arr_19 [14] ;
unsigned long long int arr_17 [19] ;
unsigned int arr_20 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 9103210446582556004LL : -117897025290546641LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 425037702U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1626529673;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)2154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)9526 : (short)12036;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 13442141830533483775ULL : 7532290760853770379ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 4249597422U : 1764165584U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
