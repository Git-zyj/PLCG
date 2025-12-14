#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1899690143;
long long int var_1 = -9218968656788590814LL;
signed char var_2 = (signed char)65;
unsigned char var_3 = (unsigned char)83;
unsigned char var_4 = (unsigned char)84;
unsigned int var_5 = 1158009164U;
int var_6 = -906584898;
long long int var_7 = 4925287882890860882LL;
long long int var_9 = -8738923844368545446LL;
long long int var_10 = -2203373801527063764LL;
unsigned int var_11 = 530237085U;
unsigned int var_12 = 3852632800U;
unsigned int var_13 = 3591436230U;
unsigned int var_14 = 3330519617U;
unsigned int var_15 = 2991885958U;
short var_16 = (short)-28499;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)22990;
int zero = 0;
long long int var_19 = 7226961551015615012LL;
int var_20 = -508852282;
unsigned short var_21 = (unsigned short)3368;
unsigned char var_22 = (unsigned char)74;
long long int var_23 = -5990909841780076166LL;
signed char var_24 = (signed char)88;
unsigned int var_25 = 750967889U;
unsigned char var_26 = (unsigned char)206;
int var_27 = -1950091399;
unsigned char var_28 = (unsigned char)0;
unsigned short var_29 = (unsigned short)65527;
signed char var_30 = (signed char)-84;
signed char var_31 = (signed char)38;
unsigned int var_32 = 3142000505U;
long long int var_33 = 6416184808107658488LL;
_Bool var_34 = (_Bool)1;
long long int var_35 = -7442881959514734331LL;
unsigned long long int var_36 = 6495293204343714789ULL;
long long int var_37 = -7279373532664733698LL;
unsigned int var_38 = 529872043U;
short var_39 = (short)7437;
unsigned char var_40 = (unsigned char)0;
_Bool var_41 = (_Bool)0;
unsigned int var_42 = 3763628833U;
int var_43 = 1860460470;
_Bool var_44 = (_Bool)0;
signed char var_45 = (signed char)84;
unsigned char var_46 = (unsigned char)80;
signed char arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
unsigned int arr_5 [25] [25] ;
unsigned short arr_6 [25] [25] [25] ;
signed char arr_7 [25] ;
int arr_8 [25] [25] ;
unsigned char arr_9 [25] [25] [25] [25] ;
unsigned long long int arr_10 [25] [25] [25] [25] ;
signed char arr_15 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_19 [25] [25] [25] ;
unsigned int arr_22 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-113 : (signed char)68;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7770893929999530728ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 8096147454491355031LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 17149050591167394648ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1309470130U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)31342 : (unsigned short)10450;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 501000642;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)35 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 3522704968554059551ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)-94 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2164544121U : 3471836472U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 2315855721U : 133757698U;
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
