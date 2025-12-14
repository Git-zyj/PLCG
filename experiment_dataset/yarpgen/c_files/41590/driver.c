#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5991909049432049319ULL;
unsigned char var_4 = (unsigned char)67;
unsigned int var_5 = 2242917137U;
unsigned long long int var_6 = 8362922268418908537ULL;
unsigned char var_7 = (unsigned char)174;
signed char var_8 = (signed char)-110;
unsigned int var_10 = 4023956904U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
unsigned int var_13 = 3201240995U;
unsigned short var_14 = (unsigned short)50731;
long long int var_15 = -4259723345074184358LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2596518879U;
unsigned short var_18 = (unsigned short)40360;
long long int var_19 = 2350726916341012302LL;
short var_20 = (short)26746;
int var_21 = 1452470747;
unsigned long long int var_22 = 7687779047127403274ULL;
unsigned long long int var_23 = 8887823418005087791ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)39;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)142;
unsigned short arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned char arr_4 [21] [21] ;
signed char arr_5 [11] ;
unsigned int arr_10 [11] ;
unsigned long long int arr_16 [24] ;
signed char arr_17 [24] ;
int arr_18 [24] [24] [24] ;
unsigned short arr_24 [24] [24] [24] [24] [24] ;
unsigned long long int arr_26 [24] [24] [24] [24] [24] [24] ;
signed char arr_2 [18] ;
unsigned long long int arr_7 [11] ;
int arr_13 [11] [11] [11] [11] ;
unsigned char arr_14 [11] ;
long long int arr_28 [24] [24] [24] [24] [24] ;
short arr_29 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_30 [24] [24] [24] [24] [24] ;
_Bool arr_31 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56455 : (unsigned short)60613;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)30438;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 3307417443U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = 15946861279797559050ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -2050571950;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)58696;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 13771511006257090018ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 15358696343066835624ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1877039289;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 3283251763895244786LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)87;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 3795884756U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
