#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -158869305;
signed char var_3 = (signed char)-55;
int var_4 = 1668498721;
unsigned long long int var_5 = 8718978609680284880ULL;
long long int var_6 = 5201643203415584472LL;
unsigned short var_7 = (unsigned short)58050;
unsigned char var_8 = (unsigned char)229;
_Bool var_9 = (_Bool)0;
int var_10 = 1538216475;
unsigned long long int var_11 = 2247743345149774473ULL;
int zero = 0;
unsigned long long int var_12 = 518928788083148290ULL;
unsigned long long int var_13 = 2607586172767555422ULL;
unsigned char var_14 = (unsigned char)48;
int var_15 = 1477805162;
int var_16 = -1852149541;
unsigned long long int var_17 = 5618946140035074649ULL;
unsigned long long int var_18 = 8078757645339739198ULL;
unsigned short var_19 = (unsigned short)8643;
unsigned int var_20 = 4001351585U;
unsigned char var_21 = (unsigned char)144;
unsigned int var_22 = 2778028384U;
signed char var_23 = (signed char)60;
unsigned long long int var_24 = 14804379587140045305ULL;
int arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned long long int arr_2 [24] ;
short arr_3 [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
unsigned short arr_10 [24] [24] [24] [24] [24] ;
unsigned short arr_17 [21] ;
int arr_12 [24] [24] [24] ;
short arr_13 [24] ;
short arr_14 [24] ;
unsigned short arr_15 [24] ;
long long int arr_18 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1939728030;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3839251189593223973ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-26764;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 55072511671220506ULL : 18080595463067199096ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)53243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)49704;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2034070819 : 694805884;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)20452 : (short)-7762;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-24106 : (short)-29950;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)14456;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 2697098457531611878LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
