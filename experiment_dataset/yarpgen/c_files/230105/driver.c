#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -7434148;
_Bool var_1 = (_Bool)1;
short var_2 = (short)13652;
signed char var_3 = (signed char)92;
long long int var_5 = 3241403229173733095LL;
_Bool var_6 = (_Bool)0;
int var_7 = 2007417128;
unsigned short var_8 = (unsigned short)43744;
long long int var_10 = 5286368409760346442LL;
short var_11 = (short)939;
long long int var_12 = 8270198317822991266LL;
unsigned long long int var_15 = 7937243522998805027ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 760711358;
signed char var_18 = (signed char)31;
long long int var_19 = -1098779871280006304LL;
short var_20 = (short)-20314;
int var_21 = -80941493;
short var_22 = (short)29488;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-814;
int var_25 = 554446225;
unsigned long long int var_26 = 1596473977776346072ULL;
signed char var_27 = (signed char)-127;
_Bool arr_0 [12] [12] ;
_Bool arr_1 [12] ;
signed char arr_2 [12] ;
signed char arr_8 [11] [11] ;
signed char arr_9 [11] ;
long long int arr_10 [11] [11] ;
unsigned long long int arr_12 [11] ;
unsigned long long int arr_18 [11] [11] ;
unsigned long long int arr_26 [13] [13] ;
short arr_27 [13] ;
int arr_30 [24] ;
long long int arr_32 [24] [24] ;
signed char arr_3 [12] ;
signed char arr_4 [12] ;
long long int arr_11 [11] ;
int arr_17 [11] [11] [11] ;
unsigned long long int arr_22 [11] ;
short arr_23 [11] ;
unsigned long long int arr_24 [11] ;
short arr_25 [11] [11] ;
_Bool arr_29 [13] ;
unsigned long long int arr_34 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = -4228018842330604417LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 18027582038833142276ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_18 [i_0] [i_1] = 13476436424219403509ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = 9325548443808873384ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (short)26194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 780510587 : -1544511028;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = -5354437703592595006LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 6501826024852205676LL : -8176528252797045077LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -271609080 : -1056911919;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 10729038984485566890ULL : 17748577788680712928ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)1821 : (short)14251;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 6184813397076770408ULL : 8381705651766246583ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22399 : (short)-9275;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 15824405056903899104ULL : 7787707456665218422ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
