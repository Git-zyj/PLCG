#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_12 = 3296399101450588888LL;
signed char var_13 = (signed char)-70;
long long int var_14 = 2821959907843515525LL;
unsigned char var_15 = (unsigned char)85;
unsigned char var_16 = (unsigned char)251;
signed char var_17 = (signed char)-52;
long long int var_18 = -6485592026645496759LL;
signed char var_19 = (signed char)-91;
unsigned int var_20 = 3075233348U;
short var_21 = (short)30422;
short var_22 = (short)-7250;
int var_23 = -460023637;
unsigned long long int var_24 = 2638840027139127446ULL;
short var_25 = (short)8480;
short arr_4 [22] ;
_Bool arr_5 [22] ;
unsigned int arr_7 [22] ;
short arr_8 [22] [22] [22] ;
unsigned short arr_11 [22] [22] [22] [22] ;
int arr_19 [22] [22] ;
unsigned long long int arr_23 [10] ;
unsigned int arr_34 [24] [24] ;
short arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
long long int arr_16 [22] ;
long long int arr_21 [22] [22] ;
unsigned short arr_24 [10] ;
unsigned short arr_25 [10] ;
unsigned short arr_30 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)28956;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 1353417069U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)3754;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)20416;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = -1591988447;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 4542942338673307064ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = 2789908493U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)15091 : (short)11960;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40114 : (unsigned short)21282;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = -4591611690856761044LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 3167312822426883261LL : -5713555855545574908LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (unsigned short)15334;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (unsigned short)54082;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)40844;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
