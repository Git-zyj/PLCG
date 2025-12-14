#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8779970901226007534LL;
signed char var_5 = (signed char)88;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 1176757064U;
short var_11 = (short)-4225;
unsigned int var_12 = 2909873573U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 7987206396612952485ULL;
unsigned int var_18 = 2537482301U;
short var_19 = (short)-26292;
unsigned long long int var_20 = 9898867152005120847ULL;
long long int var_21 = -5081041072237920066LL;
unsigned short var_22 = (unsigned short)42126;
unsigned long long int var_23 = 14388878834234002494ULL;
int var_24 = -1539618580;
unsigned char var_25 = (unsigned char)198;
unsigned char arr_1 [12] ;
_Bool arr_2 [12] ;
_Bool arr_4 [12] [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
unsigned char arr_11 [11] ;
_Bool arr_12 [11] ;
int arr_6 [12] [12] [12] ;
_Bool arr_13 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3851010448239439653ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1287234771;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
