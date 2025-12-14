#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_3 = 3138080826U;
unsigned char var_5 = (unsigned char)101;
long long int var_6 = -5194129731060030546LL;
unsigned long long int var_7 = 10810612523714031947ULL;
long long int var_8 = -3253467042690875605LL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)182;
unsigned long long int var_13 = 7782263693032109889ULL;
short var_14 = (short)28957;
short var_16 = (short)-12657;
int var_18 = 841069574;
int zero = 0;
long long int var_19 = -6112433696318163335LL;
int var_20 = -933334624;
unsigned char var_21 = (unsigned char)165;
unsigned char var_22 = (unsigned char)67;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 8500004211544366956ULL;
unsigned int var_25 = 2658879794U;
int var_26 = 205573611;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 777909316U;
unsigned char var_29 = (unsigned char)9;
unsigned short var_30 = (unsigned short)30311;
int var_31 = -2062165202;
short var_32 = (short)19222;
_Bool arr_11 [18] [18] [18] ;
long long int arr_12 [18] [18] ;
_Bool arr_16 [19] ;
unsigned short arr_20 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = -4594892381482169999LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned short)4824;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
