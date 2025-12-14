#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28055;
_Bool var_1 = (_Bool)1;
long long int var_2 = -1445766042431327482LL;
unsigned short var_3 = (unsigned short)38108;
unsigned char var_4 = (unsigned char)6;
unsigned short var_5 = (unsigned short)26123;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4679581718252657240ULL;
unsigned int var_8 = 3927903512U;
int var_9 = 1139061702;
unsigned char var_10 = (unsigned char)155;
unsigned long long int var_11 = 2584923740105561112ULL;
signed char var_12 = (signed char)-119;
unsigned char var_13 = (unsigned char)123;
int var_14 = 1885941050;
long long int var_15 = -2316680501055772960LL;
_Bool var_16 = (_Bool)1;
int var_17 = -2071662427;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = 1901748561419900212LL;
short var_20 = (short)392;
unsigned short var_21 = (unsigned short)54882;
unsigned int var_22 = 542625609U;
unsigned long long int var_23 = 11648425676069651458ULL;
int var_24 = 1239736656;
unsigned long long int var_25 = 3958544042061333637ULL;
int var_26 = 1774953253;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
int var_29 = 2086350631;
unsigned short var_30 = (unsigned short)9559;
unsigned int var_31 = 456725089U;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)188;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)88;
int var_36 = -1112124116;
long long int var_37 = 4944309895788778198LL;
signed char var_38 = (signed char)25;
unsigned int var_39 = 3464790041U;
unsigned long long int var_40 = 4332917475305089787ULL;
short var_41 = (short)30973;
signed char var_42 = (signed char)-95;
unsigned int var_43 = 4000842906U;
long long int arr_2 [23] ;
long long int arr_3 [23] ;
short arr_6 [23] [23] [23] ;
short arr_14 [23] [23] ;
unsigned long long int arr_17 [13] [13] ;
unsigned int arr_18 [13] ;
signed char arr_19 [13] ;
int arr_24 [20] ;
unsigned int arr_36 [16] ;
unsigned char arr_41 [24] [24] ;
int arr_42 [24] ;
_Bool arr_47 [18] ;
unsigned int arr_53 [18] [18] [18] ;
_Bool arr_65 [18] [18] [18] [18] [18] ;
int arr_66 [18] ;
_Bool arr_67 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6535639281292706720LL : 8836008150730340968LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -3525230557470216101LL : -508164583746344111LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-3770 : (short)-7978;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17450 : (short)-8789;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 5353429712605297099ULL : 13062238484191443619ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1579087734U : 1879918639U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)-50 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -1741040214 : -82154304;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 3605498379U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = -901425661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_47 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3931708833U : 2073143737U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? -1729953966 : -631623749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
