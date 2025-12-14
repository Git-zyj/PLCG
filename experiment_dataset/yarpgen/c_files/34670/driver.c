#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
int var_2 = 1904613623;
_Bool var_4 = (_Bool)0;
int var_6 = 1724874198;
int var_7 = -138209493;
int var_8 = -561444042;
long long int var_9 = -173737936581069392LL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3434006189U;
short var_13 = (short)11155;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)196;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4129109190U;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
long long int var_21 = 3512963823037074164LL;
int var_22 = 2090058229;
_Bool var_23 = (_Bool)0;
long long int var_24 = -1913530157210081541LL;
unsigned int var_25 = 4023974027U;
short var_26 = (short)13791;
int var_27 = -117095469;
unsigned short var_28 = (unsigned short)29728;
unsigned short var_29 = (unsigned short)43171;
int var_30 = 818478276;
unsigned short var_31 = (unsigned short)31067;
signed char arr_0 [19] [19] ;
unsigned long long int arr_1 [19] [19] ;
unsigned long long int arr_3 [19] [19] [19] ;
unsigned char arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
unsigned char arr_6 [19] ;
signed char arr_8 [19] ;
unsigned int arr_2 [19] [19] ;
unsigned long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 10631570934259734692ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 735161427804338888ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 4526529776639053054ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3170133833U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 10984662348395932772ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
