#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3082622531U;
signed char var_1 = (signed char)50;
unsigned long long int var_2 = 4384394187174258813ULL;
long long int var_3 = -2210738625655173287LL;
signed char var_5 = (signed char)-124;
signed char var_6 = (signed char)-56;
signed char var_7 = (signed char)-110;
unsigned int var_8 = 3504498368U;
signed char var_9 = (signed char)116;
unsigned long long int var_10 = 438439282480187269ULL;
short var_11 = (short)21158;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2964861342U;
short var_14 = (short)28791;
int zero = 0;
short var_15 = (short)-13385;
_Bool var_16 = (_Bool)1;
int var_17 = -912437345;
short var_18 = (short)-28255;
unsigned long long int var_19 = 15285778773244375014ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = -6437066588691311292LL;
long long int var_23 = -9091307084644592185LL;
int var_24 = 1594805714;
short var_25 = (short)-23432;
signed char var_26 = (signed char)33;
long long int var_27 = -9195724532113355358LL;
signed char var_28 = (signed char)-35;
signed char var_29 = (signed char)-6;
long long int var_30 = -2534461650513995296LL;
unsigned long long int var_31 = 16986849061988179079ULL;
int var_32 = -1810074598;
_Bool var_33 = (_Bool)0;
unsigned int arr_0 [17] ;
unsigned short arr_5 [25] [25] ;
signed char arr_6 [25] [25] ;
signed char arr_9 [25] ;
signed char arr_10 [25] ;
int arr_11 [25] ;
_Bool arr_14 [25] ;
signed char arr_15 [25] ;
_Bool arr_17 [25] [25] [25] ;
unsigned int arr_18 [25] ;
short arr_20 [25] ;
unsigned char arr_21 [25] [25] [25] ;
unsigned int arr_7 [25] [25] ;
unsigned long long int arr_8 [25] [25] ;
_Bool arr_12 [25] ;
_Bool arr_16 [25] ;
_Bool arr_28 [25] ;
signed char arr_29 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3051366943U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)60203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -521313553 : 356532267;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 3048789997U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (short)5337;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 177176491U : 1151869339U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 13665302207944837676ULL : 11812565446244869416ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = (signed char)119;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
