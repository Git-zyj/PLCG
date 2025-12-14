#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17065;
unsigned char var_1 = (unsigned char)107;
signed char var_2 = (signed char)-34;
unsigned int var_3 = 656928327U;
int var_4 = -1258361567;
unsigned char var_7 = (unsigned char)77;
signed char var_8 = (signed char)9;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 13024501135610139698ULL;
unsigned int var_11 = 2109404265U;
unsigned long long int var_12 = 10073621812530430606ULL;
unsigned int var_13 = 538235676U;
unsigned short var_14 = (unsigned short)61158;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)18225;
signed char var_17 = (signed char)-125;
unsigned long long int var_18 = 3659466170017567660ULL;
unsigned int var_19 = 1064969620U;
signed char var_20 = (signed char)-33;
unsigned short var_21 = (unsigned short)48837;
unsigned short var_22 = (unsigned short)2155;
signed char var_23 = (signed char)76;
long long int var_24 = -8224030857913157922LL;
unsigned char var_25 = (unsigned char)82;
int var_26 = 1667034963;
signed char var_27 = (signed char)-62;
signed char var_28 = (signed char)-107;
unsigned int var_29 = 2418891599U;
unsigned char var_30 = (unsigned char)0;
signed char arr_0 [21] [21] ;
long long int arr_1 [21] ;
_Bool arr_3 [21] [21] ;
unsigned short arr_4 [21] [21] [21] ;
_Bool arr_8 [21] [21] [21] ;
unsigned short arr_9 [21] ;
unsigned char arr_10 [21] ;
unsigned int arr_11 [21] ;
unsigned long long int arr_15 [21] ;
signed char arr_18 [21] [21] [21] [21] ;
_Bool arr_19 [21] [21] [21] ;
signed char arr_25 [21] [21] [21] ;
int arr_29 [21] [21] ;
unsigned int arr_7 [21] [21] ;
signed char arr_14 [21] [21] [21] [21] ;
unsigned short arr_17 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 137524537268295506LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)5357;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)54189;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3027115702U : 1493805696U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 12468083216644942068ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-50 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = -1579222473;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 2146921599U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)33 : (signed char)54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)30180;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
