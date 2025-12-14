#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 4676324061489314698ULL;
long long int var_7 = -8397581130407059072LL;
unsigned int var_8 = 3475546131U;
int var_9 = 1114564474;
short var_11 = (short)11301;
signed char var_12 = (signed char)-43;
unsigned int var_13 = 2298098994U;
unsigned long long int var_15 = 18316575121110593468ULL;
int zero = 0;
unsigned int var_18 = 3628894567U;
unsigned long long int var_19 = 17954891386014286939ULL;
unsigned short var_20 = (unsigned short)47325;
long long int var_21 = -9188254276534162336LL;
unsigned int var_22 = 222241307U;
signed char var_23 = (signed char)42;
unsigned int var_24 = 4012470862U;
_Bool var_25 = (_Bool)0;
short var_26 = (short)-21313;
unsigned short var_27 = (unsigned short)39307;
unsigned char var_28 = (unsigned char)203;
signed char var_29 = (signed char)-72;
unsigned char var_30 = (unsigned char)206;
short var_31 = (short)-29320;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] ;
short arr_5 [10] ;
_Bool arr_10 [10] [10] ;
int arr_11 [10] [10] ;
short arr_12 [10] [10] [10] ;
_Bool arr_13 [10] [10] [10] [10] ;
unsigned char arr_14 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_15 [10] [10] [10] [10] ;
unsigned long long int arr_18 [10] ;
unsigned short arr_23 [10] [10] ;
short arr_25 [10] [10] ;
signed char arr_2 [25] ;
_Bool arr_3 [25] ;
unsigned long long int arr_7 [10] ;
_Bool arr_8 [10] ;
unsigned short arr_16 [10] [10] ;
signed char arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 4047340157U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1188473197U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-32045;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -290906192 : -1177679517;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)28527 : (short)-23463;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)119 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 8422240459895288306ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 6901118254955535709ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)48452 : (unsigned short)65490;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (short)19882;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15200449628719092423ULL : 781203964329390581ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)16221 : (unsigned short)43464;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-52 : (signed char)52;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
