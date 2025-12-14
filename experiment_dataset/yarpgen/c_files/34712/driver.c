#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
long long int var_3 = 5593593827056085712LL;
unsigned short var_5 = (unsigned short)17033;
signed char var_7 = (signed char)61;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)181;
unsigned int var_12 = 1976619738U;
int zero = 0;
long long int var_13 = 4442999794701116799LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)15754;
signed char var_16 = (signed char)92;
unsigned short var_17 = (unsigned short)16707;
unsigned int var_18 = 3691200836U;
long long int var_19 = -7464852759903167805LL;
unsigned short var_20 = (unsigned short)16507;
unsigned int var_21 = 124730271U;
long long int var_22 = -6663867057978720956LL;
unsigned short var_23 = (unsigned short)15921;
unsigned short var_24 = (unsigned short)36398;
unsigned int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
int arr_6 [19] [19] ;
unsigned short arr_7 [19] [19] ;
long long int arr_9 [19] [19] [19] ;
signed char arr_10 [19] ;
long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1406158519U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26365;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 151372262;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)23667;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -6060785587250019492LL : -3356517553161251985LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 6043951643014616612LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
