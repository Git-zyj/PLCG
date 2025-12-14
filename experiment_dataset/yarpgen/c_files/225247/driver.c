#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-110;
unsigned int var_5 = 3430042883U;
unsigned long long int var_6 = 5884523771760525376ULL;
unsigned short var_7 = (unsigned short)35846;
unsigned short var_8 = (unsigned short)59530;
int var_9 = 443897824;
int var_11 = -868831985;
unsigned short var_12 = (unsigned short)44966;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2161871261486774476LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)114;
int zero = 0;
int var_19 = -80218525;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)186;
_Bool var_22 = (_Bool)0;
int var_23 = -1408253855;
int var_24 = -1551827089;
unsigned char var_25 = (unsigned char)125;
long long int var_26 = -8454046933895805999LL;
int var_27 = 1348884858;
int var_28 = 439269909;
long long int arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned char arr_5 [25] ;
int arr_6 [25] ;
unsigned short arr_8 [25] ;
unsigned short arr_9 [25] [25] [25] ;
unsigned short arr_10 [25] ;
long long int arr_3 [15] ;
unsigned char arr_4 [15] ;
unsigned int arr_7 [25] ;
long long int arr_11 [25] ;
_Bool arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -8188693110780586233LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)3686;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 207434690;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)3971;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)54749;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)20583;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8928444865006084690LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3192242192U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 3592552040786087229LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
