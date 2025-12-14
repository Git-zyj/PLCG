#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1968741054428140674LL;
unsigned int var_1 = 2246089283U;
signed char var_2 = (signed char)-66;
unsigned char var_4 = (unsigned char)236;
signed char var_6 = (signed char)31;
unsigned char var_7 = (unsigned char)143;
unsigned short var_9 = (unsigned short)16205;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)31971;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)51990;
long long int var_16 = 5608261762521914083LL;
signed char var_17 = (signed char)49;
signed char var_18 = (signed char)-35;
unsigned char var_19 = (unsigned char)236;
short var_20 = (short)-30307;
unsigned short var_21 = (unsigned short)9357;
unsigned char var_22 = (unsigned char)58;
_Bool var_23 = (_Bool)1;
short var_24 = (short)30087;
signed char var_25 = (signed char)-25;
unsigned char var_26 = (unsigned char)96;
short var_27 = (short)12826;
unsigned short var_28 = (unsigned short)45807;
unsigned int var_29 = 3022900470U;
unsigned char var_30 = (unsigned char)67;
int var_31 = -461200447;
unsigned short arr_0 [15] ;
unsigned short arr_2 [15] ;
short arr_3 [15] [15] [15] ;
signed char arr_7 [15] [15] [15] [15] ;
signed char arr_9 [15] ;
signed char arr_13 [15] [15] [15] [15] ;
long long int arr_24 [18] ;
int arr_27 [18] [18] [18] ;
long long int arr_28 [18] [18] [18] ;
unsigned long long int arr_29 [18] ;
signed char arr_32 [18] ;
short arr_33 [18] [18] [18] [18] [18] ;
short arr_34 [18] [18] [18] [18] [18] ;
unsigned char arr_35 [18] [18] [18] [18] ;
unsigned short arr_40 [18] [18] [18] [18] ;
unsigned int arr_41 [18] [18] [18] [18] ;
signed char arr_43 [18] [18] [18] [18] [18] [18] [18] ;
short arr_36 [18] [18] [18] [18] [18] ;
short arr_37 [18] [18] [18] [18] [18] ;
unsigned long long int arr_38 [18] [18] [18] ;
unsigned char arr_44 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51876 : (unsigned short)27286;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)2050;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)24983;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 2033109593680187761LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -2128769835;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 3312059207593965310LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = 11399138897088171368ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)31957;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)30036;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)54784 : (unsigned short)21061;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3161625435U : 2139346843U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)53 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)14336;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-19227;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 12174436819442911848ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_44 [i_0] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
