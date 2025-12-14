#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28361;
int var_1 = -326944659;
unsigned char var_2 = (unsigned char)65;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1934077100720347698LL;
unsigned long long int var_7 = 9896283998386523556ULL;
unsigned long long int var_8 = 4482234326950050908ULL;
int zero = 0;
long long int var_12 = 8130180105440730852LL;
unsigned int var_13 = 2213933194U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11024;
signed char var_16 = (signed char)51;
unsigned short var_17 = (unsigned short)2519;
unsigned long long int var_18 = 14613897814740063571ULL;
unsigned long long int var_19 = 1636370733292525199ULL;
unsigned long long int var_20 = 15334923254410722931ULL;
int var_21 = 573813289;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-17668;
unsigned long long int var_24 = 1157275546249542283ULL;
int arr_4 [12] [12] ;
int arr_5 [12] ;
long long int arr_8 [22] ;
unsigned char arr_13 [22] ;
unsigned long long int arr_19 [22] [22] ;
short arr_20 [22] ;
unsigned short arr_24 [22] [22] [22] [22] ;
short arr_25 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -657547198;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1346501697;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 8351840696358890498LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 3439258289298088189ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (short)27881;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33230;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (short)-1882;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
