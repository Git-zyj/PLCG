#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2451;
unsigned long long int var_1 = 1841559944292997956ULL;
unsigned long long int var_2 = 14813599937460550719ULL;
unsigned int var_3 = 2822970034U;
unsigned char var_4 = (unsigned char)117;
short var_5 = (short)-5224;
unsigned char var_6 = (unsigned char)166;
unsigned short var_7 = (unsigned short)60821;
unsigned short var_9 = (unsigned short)7717;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2956961259939559911ULL;
short var_12 = (short)-1712;
long long int var_13 = -5432380628357978210LL;
unsigned short var_14 = (unsigned short)47766;
unsigned short var_15 = (unsigned short)42647;
int zero = 0;
long long int var_16 = -6843057214779238971LL;
unsigned char var_17 = (unsigned char)42;
unsigned long long int var_18 = 9548305493733836839ULL;
unsigned long long int var_19 = 7713286303892772579ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15239;
unsigned short var_22 = (unsigned short)36413;
_Bool var_23 = (_Bool)0;
long long int var_24 = 5926706260499542171LL;
int var_25 = 1562194464;
unsigned short var_26 = (unsigned short)28020;
long long int var_27 = 6457836321758199164LL;
long long int arr_6 [12] [12] [12] ;
_Bool arr_8 [19] [19] ;
_Bool arr_14 [19] [19] ;
long long int arr_2 [12] ;
_Bool arr_7 [12] [12] ;
unsigned short arr_11 [19] [19] ;
unsigned short arr_17 [18] ;
unsigned short arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 7317469557031035681LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 510600594589193349LL : 8477522911631947175LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)18473 : (unsigned short)21485;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned short)25001;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned short)46129;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
