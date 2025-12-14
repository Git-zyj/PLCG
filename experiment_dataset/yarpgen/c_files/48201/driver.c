#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3884594384U;
signed char var_2 = (signed char)-45;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13442151857225998201ULL;
long long int var_5 = 2813438205197135827LL;
int var_6 = -1828467409;
signed char var_7 = (signed char)-48;
unsigned short var_8 = (unsigned short)26305;
short var_10 = (short)23909;
int var_11 = -322143426;
unsigned short var_12 = (unsigned short)14613;
long long int var_13 = -2200133285476945249LL;
short var_15 = (short)-19257;
unsigned int var_16 = 2330197059U;
signed char var_17 = (signed char)22;
long long int var_18 = -4964301225752809049LL;
int zero = 0;
unsigned int var_19 = 2468586861U;
_Bool var_20 = (_Bool)1;
int var_21 = -160493132;
signed char var_22 = (signed char)124;
unsigned long long int var_23 = 4438653984249538294ULL;
signed char var_24 = (signed char)79;
unsigned short var_25 = (unsigned short)45412;
unsigned short var_26 = (unsigned short)54631;
int var_27 = 1118140791;
unsigned char var_28 = (unsigned char)204;
unsigned int var_29 = 1976324481U;
unsigned int var_30 = 3267853772U;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 3337118317U;
signed char var_33 = (signed char)-99;
signed char var_34 = (signed char)69;
unsigned int var_35 = 848921495U;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
long long int var_38 = -5104936136348247749LL;
signed char var_39 = (signed char)9;
int var_40 = -1480233212;
unsigned char arr_1 [21] [21] ;
long long int arr_2 [21] ;
short arr_3 [21] ;
short arr_4 [21] ;
unsigned short arr_5 [21] ;
signed char arr_6 [21] [21] [21] ;
_Bool arr_7 [21] [21] ;
signed char arr_8 [21] ;
int arr_9 [21] [21] ;
unsigned short arr_11 [21] [21] [21] ;
short arr_12 [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] ;
unsigned int arr_18 [21] [21] ;
int arr_19 [21] [21] ;
unsigned long long int arr_22 [21] [21] [21] ;
unsigned int arr_24 [21] [21] ;
unsigned int arr_26 [21] ;
signed char arr_14 [21] [21] ;
long long int arr_15 [21] [21] [21] ;
unsigned int arr_16 [21] [21] ;
signed char arr_23 [21] ;
_Bool arr_27 [21] [21] [21] ;
unsigned long long int arr_30 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1121757551507275329LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-24118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-30964;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)41700;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = -930720852;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)45815;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)32310;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)60 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = 1348365784U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = 1737477962;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10970653846890945723ULL : 4164784548909786084ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 688181930U : 4287374345U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = 463324030U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-80 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 808903915835273289LL : 2002132042726789006LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 4279442613U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = 5132982712471836564ULL;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
