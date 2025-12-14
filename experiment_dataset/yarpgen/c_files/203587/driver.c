#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1784275795U;
signed char var_1 = (signed char)40;
long long int var_2 = -4672577703766654423LL;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)17390;
long long int var_6 = 669091149919098181LL;
short var_7 = (short)3597;
long long int var_10 = 3379938734537912518LL;
long long int var_11 = -8608456639150306803LL;
unsigned char var_12 = (unsigned char)240;
int zero = 0;
long long int var_13 = 2714808060387457883LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7000787269939281545LL;
short var_16 = (short)-19420;
unsigned int var_17 = 712259152U;
long long int var_18 = -650079962391887782LL;
short var_19 = (short)12216;
unsigned short var_20 = (unsigned short)42361;
int var_21 = -1301073624;
unsigned long long int var_22 = 11658224444154530432ULL;
signed char var_23 = (signed char)123;
unsigned int var_24 = 3000637643U;
unsigned char var_25 = (unsigned char)3;
int var_26 = 1137958135;
signed char var_27 = (signed char)111;
long long int var_28 = 9192874052255157925LL;
int var_29 = -197332317;
signed char var_30 = (signed char)56;
unsigned long long int var_31 = 10920503363895224155ULL;
signed char var_32 = (signed char)30;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-43;
int var_35 = -1451420031;
unsigned long long int var_36 = 2016882326323204870ULL;
_Bool arr_0 [24] ;
signed char arr_1 [24] ;
short arr_2 [24] ;
unsigned long long int arr_3 [24] ;
_Bool arr_4 [24] ;
long long int arr_5 [24] [24] ;
unsigned short arr_10 [24] ;
unsigned int arr_12 [24] [24] [24] [24] [24] ;
long long int arr_13 [24] ;
unsigned int arr_24 [25] [25] ;
unsigned int arr_25 [25] ;
unsigned char arr_26 [25] ;
int arr_28 [25] ;
signed char arr_29 [25] [25] ;
unsigned long long int arr_30 [25] [25] [25] ;
int arr_31 [25] [25] [25] ;
unsigned short arr_32 [25] [25] [25] ;
unsigned int arr_34 [25] [25] [25] [25] ;
unsigned char arr_37 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_41 [25] ;
long long int arr_42 [25] ;
_Bool arr_44 [25] [25] [25] [25] ;
unsigned char arr_45 [25] [25] [25] [25] ;
unsigned int arr_15 [24] [24] [24] [24] [24] ;
_Bool arr_16 [24] [24] [24] [24] [24] [24] ;
short arr_22 [24] [24] ;
unsigned char arr_23 [24] ;
long long int arr_27 [25] ;
unsigned char arr_39 [25] ;
short arr_49 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)7086;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 7831221658279813034ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 1159867394993211754LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)32528;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1627779108U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -8384794667417422768LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = 1389875249U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = 333661613U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = 666436849;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 290595189820219126ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -782994299;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)23724;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 4173621668U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = 2582483679U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = 1907860215787915755LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)114 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 3414008407U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (short)4589;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = -8309727512849767309LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-11248 : (short)24747;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
