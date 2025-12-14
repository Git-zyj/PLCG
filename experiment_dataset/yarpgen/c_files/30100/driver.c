#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned char var_2 = (unsigned char)93;
unsigned char var_6 = (unsigned char)103;
unsigned long long int var_7 = 2866565369239356494ULL;
unsigned char var_11 = (unsigned char)250;
unsigned short var_14 = (unsigned short)24713;
unsigned char var_17 = (unsigned char)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-34;
signed char var_21 = (signed char)-37;
short var_22 = (short)20608;
signed char var_23 = (signed char)-67;
unsigned char var_24 = (unsigned char)64;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 18340592120905138745ULL;
long long int var_27 = 8978152898238403429LL;
short var_28 = (short)-29019;
long long int var_29 = 8532784155569621275LL;
signed char var_30 = (signed char)-99;
int var_31 = -859946573;
unsigned char var_32 = (unsigned char)132;
unsigned char var_33 = (unsigned char)188;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 14561540698220140046ULL;
unsigned long long int var_36 = 15010046396621794794ULL;
_Bool arr_0 [19] ;
signed char arr_1 [19] ;
long long int arr_3 [19] [19] ;
_Bool arr_6 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] [19] ;
unsigned int arr_9 [23] [23] ;
unsigned char arr_10 [23] ;
unsigned char arr_11 [23] ;
long long int arr_12 [23] ;
unsigned long long int arr_14 [22] ;
unsigned long long int arr_16 [17] ;
unsigned long long int arr_17 [17] ;
_Bool arr_21 [17] [17] [17] ;
unsigned char arr_23 [17] [17] ;
unsigned short arr_24 [17] ;
unsigned char arr_28 [17] [17] ;
long long int arr_30 [17] [17] [17] [17] [17] [17] ;
signed char arr_18 [17] ;
unsigned short arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1028375868552891249LL : -1520693777133657079LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 11717281906315378621ULL : 15282095304836718230ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2506819225U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1667020642182522093LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 13217072839329133073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 17252722441070897822ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 8627696118503923718ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (unsigned short)38475;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8734850799408887761LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned short)13823;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
