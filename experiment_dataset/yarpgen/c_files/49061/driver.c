#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned short var_1 = (unsigned short)50664;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3963814681306380432LL;
unsigned char var_5 = (unsigned char)28;
unsigned char var_6 = (unsigned char)76;
long long int var_7 = 8188086285597685894LL;
unsigned int var_8 = 2799651820U;
unsigned long long int var_9 = 12778905614107216930ULL;
int var_12 = -1740048879;
int var_14 = 246792825;
unsigned int var_18 = 2094144931U;
unsigned short var_19 = (unsigned short)56200;
int zero = 0;
signed char var_20 = (signed char)121;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)6938;
unsigned char var_23 = (unsigned char)106;
short var_24 = (short)8308;
unsigned char var_25 = (unsigned char)156;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
long long int var_29 = -8194119503554756212LL;
int var_30 = 1433657883;
long long int var_31 = 6066608519627866315LL;
int var_32 = -1710011234;
_Bool var_33 = (_Bool)0;
int var_34 = -586515171;
unsigned short var_35 = (unsigned short)36220;
signed char arr_1 [21] [21] ;
_Bool arr_3 [21] [21] [21] ;
int arr_4 [21] ;
unsigned char arr_5 [21] [21] ;
signed char arr_6 [21] [21] [21] ;
int arr_7 [21] [21] [21] ;
unsigned char arr_8 [21] [21] ;
_Bool arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1584789739;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1526360376;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
