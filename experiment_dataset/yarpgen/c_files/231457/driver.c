#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1823;
unsigned char var_1 = (unsigned char)132;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)24075;
int var_7 = -108177838;
signed char var_9 = (signed char)90;
unsigned int var_10 = 2579813506U;
unsigned long long int var_11 = 8559762917540020652ULL;
long long int var_12 = 6809907325544867226LL;
int zero = 0;
long long int var_13 = 8753827536064273548LL;
int var_14 = 483593533;
unsigned long long int var_15 = 2219523907975941984ULL;
unsigned long long int var_16 = 17166073374579427485ULL;
signed char var_17 = (signed char)-80;
unsigned short var_18 = (unsigned short)64471;
unsigned int var_19 = 714634561U;
signed char var_20 = (signed char)38;
short var_21 = (short)3270;
signed char var_22 = (signed char)75;
unsigned short var_23 = (unsigned short)43162;
unsigned long long int var_24 = 18413453885414727497ULL;
_Bool var_25 = (_Bool)0;
long long int var_26 = 7292685110120125223LL;
unsigned short var_27 = (unsigned short)2171;
unsigned int var_28 = 2342709466U;
unsigned short var_29 = (unsigned short)49799;
int var_30 = 831139125;
signed char var_31 = (signed char)58;
unsigned int arr_0 [24] [24] ;
unsigned char arr_2 [24] ;
unsigned long long int arr_3 [24] ;
int arr_4 [24] ;
short arr_5 [24] ;
long long int arr_7 [24] [24] [24] [24] ;
unsigned char arr_8 [24] [24] [24] [24] ;
unsigned char arr_14 [24] ;
signed char arr_15 [24] [24] ;
short arr_19 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 248697463U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4307444129258201909ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -2102667801;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)2214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3418425170795237396LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-112 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)29220 : (short)-16768;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
