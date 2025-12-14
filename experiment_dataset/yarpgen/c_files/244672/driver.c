#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -872920555367165241LL;
unsigned long long int var_6 = 11809821324931744473ULL;
signed char var_9 = (signed char)-78;
int zero = 0;
unsigned char var_12 = (unsigned char)22;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)48962;
long long int var_15 = 6457134730369619323LL;
signed char var_16 = (signed char)-54;
long long int var_17 = -3759515269787198499LL;
unsigned long long int var_18 = 924435312662066587ULL;
unsigned long long int var_19 = 16685789484770723278ULL;
unsigned int var_20 = 3305368831U;
short var_21 = (short)-26771;
long long int var_22 = -2358735424852210423LL;
unsigned short var_23 = (unsigned short)41859;
unsigned long long int var_24 = 16302603433444249785ULL;
signed char var_25 = (signed char)-126;
long long int var_26 = -8633972456838221681LL;
int var_27 = 1219871034;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)252;
long long int var_30 = 6807151049318714266LL;
unsigned int var_31 = 3765731848U;
unsigned int var_32 = 2770333875U;
unsigned short var_33 = (unsigned short)41575;
int var_34 = 1276969839;
unsigned long long int var_35 = 15841476318849075294ULL;
signed char var_36 = (signed char)77;
signed char var_37 = (signed char)-5;
_Bool var_38 = (_Bool)1;
unsigned long long int var_39 = 7116302971159294288ULL;
long long int var_40 = -2152686063651967995LL;
long long int var_41 = 8556732134375526117LL;
short arr_0 [25] ;
unsigned int arr_1 [25] ;
_Bool arr_2 [25] ;
long long int arr_3 [25] ;
_Bool arr_5 [11] ;
short arr_6 [11] [11] ;
signed char arr_7 [11] ;
int arr_8 [11] [11] ;
int arr_9 [11] [11] [11] ;
unsigned char arr_10 [11] [11] [11] [11] ;
unsigned long long int arr_12 [11] [11] ;
int arr_13 [11] ;
unsigned long long int arr_14 [11] [11] [11] ;
short arr_16 [11] [11] [11] ;
unsigned long long int arr_17 [11] [11] ;
unsigned int arr_18 [11] [11] [11] [11] ;
short arr_20 [11] [11] [11] [11] ;
signed char arr_21 [11] [11] ;
long long int arr_23 [11] [11] [11] [11] ;
int arr_24 [11] [11] ;
int arr_32 [22] ;
unsigned long long int arr_34 [22] ;
int arr_35 [22] [22] ;
int arr_4 [25] ;
short arr_11 [11] [11] [11] ;
unsigned char arr_19 [11] [11] [11] [11] ;
unsigned long long int arr_30 [11] [11] ;
long long int arr_38 [22] ;
unsigned char arr_39 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)29712;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4171835412U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -8345817593469143394LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-28909;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 1384550262;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -277622210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = 9952533623958489878ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -574772433;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 9373970401653393163ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)18923;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = 14114931976703816792ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 2944807508U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (short)12209;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 6084127032330585731LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = 1632534062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = 1987210495;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = 13395490939587295627ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_35 [i_0] [i_1] = -1004095261;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1863731063;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-3756;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_30 [i_0] [i_1] = 1037749226508420667ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = 8530904153900657354LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (unsigned char)135;
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
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
