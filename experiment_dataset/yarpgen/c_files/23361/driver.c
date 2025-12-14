#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48200;
_Bool var_2 = (_Bool)1;
int var_3 = 2098878397;
unsigned long long int var_4 = 6099698282040819707ULL;
unsigned short var_6 = (unsigned short)25634;
unsigned short var_7 = (unsigned short)33151;
unsigned short var_8 = (unsigned short)59332;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)18713;
int var_11 = -433485459;
int var_12 = 879943150;
unsigned short var_13 = (unsigned short)47851;
unsigned short var_14 = (unsigned short)27165;
int zero = 0;
int var_15 = 1552943749;
int var_16 = -1441097638;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)52129;
unsigned short var_19 = (unsigned short)22901;
unsigned short var_20 = (unsigned short)19251;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)43448;
int var_23 = 1811248359;
unsigned short var_24 = (unsigned short)50544;
int var_25 = -801866804;
int var_26 = 334825216;
int var_27 = -512658863;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 7125573677977808372ULL;
unsigned long long int var_30 = 14358024850448554280ULL;
_Bool var_31 = (_Bool)0;
int var_32 = 436910230;
int arr_7 [17] [17] [17] ;
unsigned short arr_8 [17] [17] ;
unsigned long long int arr_13 [17] [17] ;
int arr_11 [17] [17] [17] ;
_Bool arr_16 [17] ;
_Bool arr_17 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -752170695 : 1913445527;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58387 : (unsigned short)31152;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 13745592090402004013ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1797547367;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
