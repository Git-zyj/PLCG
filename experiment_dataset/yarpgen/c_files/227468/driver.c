#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
int var_3 = -1667444281;
unsigned long long int var_4 = 7633978165973280935ULL;
unsigned char var_5 = (unsigned char)250;
unsigned long long int var_6 = 16038199692312215269ULL;
unsigned char var_7 = (unsigned char)145;
unsigned int var_8 = 1153988199U;
unsigned short var_10 = (unsigned short)42147;
unsigned long long int var_12 = 17184709789686285819ULL;
unsigned long long int var_14 = 11575311429009643357ULL;
unsigned long long int var_15 = 4225566230067067961ULL;
unsigned long long int var_16 = 14670576824258995095ULL;
long long int var_17 = 7553326884882919669LL;
int zero = 0;
long long int var_19 = -3796196505660319600LL;
unsigned long long int var_20 = 17020259506180332356ULL;
int var_21 = 1789355824;
unsigned short var_22 = (unsigned short)50000;
unsigned char var_23 = (unsigned char)115;
unsigned int var_24 = 3758603829U;
signed char var_25 = (signed char)4;
unsigned char var_26 = (unsigned char)212;
unsigned short var_27 = (unsigned short)41762;
_Bool var_28 = (_Bool)1;
int var_29 = -1968421759;
signed char var_30 = (signed char)19;
int var_31 = 225042184;
signed char var_32 = (signed char)17;
long long int var_33 = -3724549528061684730LL;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)179;
int arr_0 [14] ;
_Bool arr_1 [14] ;
short arr_2 [14] [14] ;
unsigned long long int arr_3 [14] [14] [14] ;
unsigned short arr_8 [13] ;
unsigned int arr_10 [13] ;
unsigned char arr_13 [23] [23] ;
unsigned char arr_14 [23] ;
long long int arr_17 [14] [14] ;
unsigned char arr_18 [14] [14] [14] ;
unsigned long long int arr_19 [14] [14] ;
unsigned long long int arr_20 [14] [14] [14] ;
signed char arr_21 [14] ;
long long int arr_31 [14] ;
unsigned short arr_36 [14] [14] [14] ;
unsigned short arr_4 [14] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_6 [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
_Bool arr_11 [13] ;
unsigned long long int arr_12 [13] [13] ;
unsigned long long int arr_15 [23] [23] ;
long long int arr_26 [14] ;
long long int arr_27 [14] [14] ;
unsigned int arr_28 [14] [14] [14] ;
long long int arr_32 [14] ;
unsigned int arr_38 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -206244035;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-20090;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10405098221306252034ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)25723;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 3172751111U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 6107743852142642941LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 1094440217948935303ULL : 1977119977594451451ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 5972638361543469829ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = 4150018289818614094LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned short)48288;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)39987;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 11582432785043009814ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 10591492319516891517ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 18020200837498894120ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 13386485738838080951ULL : 1788666487418638348ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = -5690396813730239397LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = 8112555928515613483LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 2600440784U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = -2234259165264618769LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = 4226952617U;
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
