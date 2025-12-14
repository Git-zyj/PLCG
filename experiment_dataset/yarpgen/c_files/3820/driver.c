#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10119647962321915028ULL;
unsigned char var_2 = (unsigned char)7;
short var_3 = (short)23795;
unsigned long long int var_5 = 12089592873447811512ULL;
unsigned short var_6 = (unsigned short)51488;
signed char var_7 = (signed char)-31;
unsigned long long int var_8 = 17780642410010871368ULL;
short var_9 = (short)12606;
signed char var_10 = (signed char)74;
int zero = 0;
signed char var_11 = (signed char)83;
unsigned short var_12 = (unsigned short)58609;
signed char var_13 = (signed char)63;
int var_14 = 963603990;
int var_15 = -1343292282;
short var_16 = (short)14096;
unsigned long long int var_17 = 11386307423349190047ULL;
unsigned long long int var_18 = 3427477591219577382ULL;
signed char var_19 = (signed char)-105;
signed char var_20 = (signed char)-55;
unsigned long long int var_21 = 11070586444097226431ULL;
short var_22 = (short)-22746;
unsigned char arr_2 [13] [13] ;
unsigned short arr_13 [15] [15] [15] [15] [15] ;
short arr_15 [25] [25] ;
signed char arr_6 [15] [15] ;
long long int arr_7 [15] [15] ;
short arr_17 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)14326 : (unsigned short)10971;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-31260;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 4547382459402931498LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (short)-26766;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
