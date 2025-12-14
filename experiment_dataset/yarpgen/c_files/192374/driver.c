#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2040419201152175490LL;
long long int var_2 = -6075585106770960579LL;
unsigned long long int var_3 = 10192403814629384485ULL;
unsigned long long int var_4 = 9138308501550659062ULL;
unsigned short var_5 = (unsigned short)8330;
unsigned long long int var_7 = 4372915504045302852ULL;
int var_8 = -1001434680;
signed char var_11 = (signed char)94;
int zero = 0;
long long int var_12 = -8220253797053979201LL;
unsigned short var_13 = (unsigned short)62926;
unsigned long long int var_14 = 2979625996499924062ULL;
unsigned char var_15 = (unsigned char)3;
signed char var_16 = (signed char)-15;
long long int var_17 = 9050469104273212256LL;
short var_18 = (short)24356;
long long int var_19 = -3039908758697698299LL;
int var_20 = 645827638;
unsigned char var_21 = (unsigned char)255;
unsigned int var_22 = 1354885579U;
unsigned char var_23 = (unsigned char)103;
unsigned char var_24 = (unsigned char)103;
unsigned long long int var_25 = 1509349374045176934ULL;
int var_26 = 668187149;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)92;
unsigned short var_29 = (unsigned short)60875;
long long int var_30 = 2743303257004563275LL;
int var_31 = -1642639714;
short var_32 = (short)7893;
unsigned long long int var_33 = 1654839004442472440ULL;
unsigned long long int var_34 = 2300242263777977272ULL;
unsigned char var_35 = (unsigned char)35;
unsigned long long int var_36 = 7455226375828899745ULL;
unsigned long long int var_37 = 12408481587314506855ULL;
unsigned int var_38 = 1700288141U;
short var_39 = (short)-24062;
unsigned short var_40 = (unsigned short)53208;
short var_41 = (short)29787;
unsigned long long int arr_0 [25] ;
unsigned int arr_1 [25] ;
long long int arr_2 [15] ;
short arr_3 [15] ;
unsigned char arr_4 [15] ;
long long int arr_6 [15] ;
int arr_8 [15] ;
_Bool arr_9 [15] [15] ;
short arr_10 [15] [15] [15] ;
int arr_11 [15] [15] [15] [15] ;
signed char arr_16 [15] ;
unsigned int arr_19 [15] [15] [15] [15] [15] ;
short arr_22 [15] [15] [15] [15] [15] [15] ;
int arr_23 [15] ;
_Bool arr_27 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 17738585001659375062ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3003588073U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 220924363606303653LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)17000 : (short)4288;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -935576409263804213LL : 7289238211579410577LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1031944809;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-18963;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -250050579 : -827836856;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1787830107U : 4270889284U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)24729 : (short)-2853;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 422658381;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
