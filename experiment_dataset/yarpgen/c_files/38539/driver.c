#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6893;
unsigned char var_1 = (unsigned char)175;
unsigned short var_2 = (unsigned short)5409;
unsigned char var_3 = (unsigned char)249;
int var_4 = -871360826;
unsigned char var_5 = (unsigned char)160;
unsigned char var_6 = (unsigned char)112;
unsigned long long int var_9 = 484687227172935011ULL;
signed char var_10 = (signed char)-35;
short var_11 = (short)22767;
unsigned long long int var_12 = 4808236009326097846ULL;
short var_13 = (short)18534;
signed char var_14 = (signed char)-110;
int zero = 0;
short var_15 = (short)-11426;
int var_16 = 503978885;
unsigned short var_17 = (unsigned short)8792;
unsigned short var_18 = (unsigned short)11646;
unsigned long long int var_19 = 7225321865925892239ULL;
signed char var_20 = (signed char)-91;
int var_21 = 2064476488;
short var_22 = (short)14050;
short var_23 = (short)1079;
unsigned char var_24 = (unsigned char)142;
long long int var_25 = -4125130867985054445LL;
unsigned char arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
unsigned int arr_3 [12] [12] ;
unsigned int arr_8 [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
unsigned int arr_11 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_14 [12] [12] ;
unsigned long long int arr_19 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 447003339U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 124857214U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 6037778327293815916ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1380277051U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 9973043773307496881ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 3757401720855395362ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
