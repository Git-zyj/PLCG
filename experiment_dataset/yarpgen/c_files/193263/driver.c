#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1769776150;
signed char var_4 = (signed char)65;
short var_6 = (short)30864;
unsigned short var_7 = (unsigned short)54716;
unsigned int var_8 = 2347448171U;
unsigned char var_10 = (unsigned char)66;
short var_13 = (short)31366;
signed char var_15 = (signed char)-126;
unsigned short var_17 = (unsigned short)23798;
unsigned char var_18 = (unsigned char)183;
int zero = 0;
long long int var_19 = 442805710815200446LL;
unsigned int var_20 = 3643825756U;
unsigned short var_21 = (unsigned short)24840;
int var_22 = -1325786299;
unsigned int var_23 = 891229275U;
int var_24 = -222891828;
unsigned int var_25 = 2407031423U;
_Bool var_26 = (_Bool)1;
int var_27 = -1779447534;
short var_28 = (short)27844;
unsigned char var_29 = (unsigned char)154;
short var_30 = (short)-20035;
unsigned int var_31 = 2567375795U;
int var_32 = 422346670;
unsigned char var_33 = (unsigned char)126;
int var_34 = -2010791151;
unsigned short var_35 = (unsigned short)35958;
short var_36 = (short)2849;
short var_37 = (short)4535;
unsigned long long int var_38 = 10173342781453616288ULL;
unsigned long long int var_39 = 4155423090430374888ULL;
long long int arr_1 [11] ;
unsigned int arr_3 [11] [11] [11] ;
int arr_7 [11] [11] ;
long long int arr_10 [11] ;
unsigned char arr_18 [25] ;
short arr_19 [25] [25] [25] ;
unsigned int arr_20 [25] ;
signed char arr_26 [25] [25] [25] [25] [25] [25] ;
signed char arr_29 [25] [25] [25] ;
unsigned short arr_30 [25] [25] [25] [25] [25] ;
_Bool arr_32 [25] [25] [25] [25] [25] ;
int arr_37 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_42 [15] ;
long long int arr_57 [20] [20] ;
int arr_60 [20] ;
signed char arr_12 [11] [11] ;
unsigned char arr_38 [25] ;
unsigned short arr_51 [15] [15] ;
signed char arr_70 [20] [20] [20] [20] ;
short arr_71 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -5272222603954514922LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4169568427U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 1076470406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -2936033869512082346LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)29447;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 3043880481U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)10310;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1389557913;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = 15103510268832821156ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_57 [i_0] [i_1] = 3613122474391479603LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_60 [i_0] = 263723716;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_51 [i_0] [i_1] = (unsigned short)16651;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_71 [i_0] = (short)25495;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_51 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_71 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
