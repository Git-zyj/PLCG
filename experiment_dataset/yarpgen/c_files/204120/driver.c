#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8118002093537855288LL;
long long int var_1 = 4637405721556680061LL;
signed char var_3 = (signed char)-102;
signed char var_4 = (signed char)82;
unsigned char var_7 = (unsigned char)74;
int var_8 = 317585950;
unsigned int var_9 = 1063557739U;
int var_10 = 1583222772;
unsigned int var_11 = 3519080507U;
int var_12 = 1187443810;
int zero = 0;
unsigned int var_15 = 771132482U;
long long int var_16 = -3242803693406451583LL;
unsigned short var_17 = (unsigned short)18106;
long long int var_18 = 7755099024502019131LL;
int var_19 = -2128097686;
unsigned long long int var_20 = 10073752775905296673ULL;
unsigned char var_21 = (unsigned char)232;
unsigned short var_22 = (unsigned short)31167;
int arr_0 [19] ;
long long int arr_7 [25] ;
unsigned char arr_8 [25] [25] ;
unsigned long long int arr_14 [25] [25] [25] ;
unsigned int arr_15 [25] [25] ;
_Bool arr_16 [25] [25] [25] ;
unsigned char arr_6 [19] [19] [19] ;
signed char arr_9 [25] ;
signed char arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 484348876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -4804497394913085217LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2728059477080800521ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 734713329U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)-80;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
