#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1001826115U;
short var_2 = (short)-19615;
signed char var_3 = (signed char)48;
signed char var_4 = (signed char)105;
short var_5 = (short)-13377;
int var_6 = 1526453340;
unsigned long long int var_8 = 12698181649911130143ULL;
unsigned char var_9 = (unsigned char)29;
signed char var_10 = (signed char)-88;
unsigned char var_11 = (unsigned char)113;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)234;
int var_14 = -1457849498;
long long int var_15 = -7312077461496622812LL;
int zero = 0;
unsigned int var_16 = 2374709126U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3302893175014263006LL;
unsigned short var_19 = (unsigned short)46568;
unsigned int var_20 = 742534579U;
unsigned char var_21 = (unsigned char)70;
short var_22 = (short)3939;
unsigned char var_23 = (unsigned char)87;
unsigned int var_24 = 3504912846U;
unsigned short var_25 = (unsigned short)5566;
signed char var_26 = (signed char)-43;
long long int var_27 = 6643846755243751968LL;
short var_28 = (short)14439;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 3337349680U;
unsigned short var_31 = (unsigned short)44643;
short var_32 = (short)10283;
int var_33 = -919799340;
long long int var_34 = -1242687854020446522LL;
unsigned int var_35 = 4156232418U;
short var_36 = (short)15966;
long long int var_37 = -5359712580741668090LL;
short var_38 = (short)-16175;
unsigned short var_39 = (unsigned short)14313;
signed char var_40 = (signed char)52;
unsigned short arr_0 [24] ;
long long int arr_1 [24] ;
short arr_5 [24] [24] ;
short arr_7 [24] ;
unsigned int arr_8 [24] ;
unsigned char arr_9 [24] [24] ;
unsigned int arr_10 [24] [24] [24] ;
short arr_13 [24] [24] ;
unsigned int arr_15 [24] ;
int arr_16 [24] ;
short arr_17 [24] [24] ;
unsigned short arr_19 [24] ;
signed char arr_21 [24] [24] [24] ;
unsigned char arr_24 [24] [24] [24] ;
short arr_26 [24] [24] ;
int arr_29 [24] ;
unsigned long long int arr_30 [24] ;
unsigned int arr_2 [24] ;
short arr_3 [24] [24] ;
long long int arr_6 [24] [24] ;
long long int arr_11 [24] [24] ;
short arr_18 [24] ;
unsigned long long int arr_22 [24] ;
unsigned int arr_27 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)24542;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -7030522129780687596LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)29972;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-3427;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 3568173317U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3386012375U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11233 : (short)16901;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1467600432U : 1342729011U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -1489403396;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-664;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (unsigned short)53008;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-89 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31894 : (short)-23066;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = -1777455465;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 16457548318621700468ULL : 16596850497106575375ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4123276421U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-23834;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -916559232698903880LL : -6252568133204118876LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = -127807453799088757LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-425 : (short)1779;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 15625647702943257669ULL : 15060967677574236605ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2756548261U : 176511805U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
