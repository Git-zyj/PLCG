#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 970417993;
long long int var_1 = -1648959628533418183LL;
unsigned char var_2 = (unsigned char)10;
long long int var_3 = 6326859058299734875LL;
unsigned char var_4 = (unsigned char)131;
unsigned int var_5 = 959165258U;
int var_6 = -1365811443;
long long int var_7 = -4370821910726379105LL;
unsigned int var_8 = 707669514U;
short var_9 = (short)-9321;
unsigned char var_10 = (unsigned char)154;
long long int var_11 = 8227139505439726676LL;
unsigned int var_12 = 2228559324U;
short var_13 = (short)28082;
unsigned int var_14 = 501233243U;
unsigned char var_15 = (unsigned char)213;
int var_16 = -968533834;
int var_17 = -1810589449;
short var_18 = (short)16122;
int zero = 0;
unsigned long long int var_19 = 9038634289130503701ULL;
unsigned short var_20 = (unsigned short)2314;
long long int var_21 = 6682820755919960209LL;
unsigned long long int var_22 = 12689839973628899532ULL;
int var_23 = -530168523;
int arr_0 [21] ;
short arr_1 [21] ;
unsigned short arr_2 [21] ;
_Bool arr_3 [21] ;
long long int arr_4 [21] [21] ;
short arr_5 [21] ;
short arr_6 [25] [25] ;
unsigned int arr_7 [25] [25] ;
unsigned int arr_8 [25] [25] [25] ;
unsigned char arr_10 [25] [25] ;
unsigned long long int arr_12 [25] ;
int arr_13 [25] [25] [25] [25] ;
short arr_14 [25] [25] [25] ;
long long int arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1843183247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-30851;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)9124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -7762708269287175681LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)3820;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)31515 : (short)30534;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2417143713U : 1146792317U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2506890879U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 836157708428415039ULL : 4154253282978045874ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1695606294;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)18945 : (short)-23663;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -7404424749010270871LL : 244825168490708301LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
