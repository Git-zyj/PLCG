#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2139750875503810607LL;
unsigned char var_2 = (unsigned char)152;
int var_3 = -592194344;
long long int var_4 = 5989294234525389357LL;
unsigned char var_7 = (unsigned char)153;
int var_8 = 1926301119;
long long int var_9 = 4070144304309469826LL;
short var_10 = (short)-5634;
unsigned int var_11 = 3131917912U;
unsigned char var_12 = (unsigned char)83;
int var_13 = 218183749;
int var_14 = 567747335;
unsigned int var_15 = 2821042611U;
int zero = 0;
short var_17 = (short)6515;
unsigned int var_18 = 1871613930U;
unsigned int var_19 = 3899393203U;
short var_20 = (short)-15814;
unsigned char var_21 = (unsigned char)108;
unsigned char var_22 = (unsigned char)157;
long long int var_23 = -5635096493368911257LL;
long long int var_24 = -9203345407591805593LL;
_Bool var_25 = (_Bool)0;
int var_26 = -251005533;
long long int var_27 = -5939238637529559100LL;
unsigned char arr_0 [25] ;
signed char arr_1 [25] [25] ;
short arr_3 [22] ;
unsigned char arr_4 [22] ;
int arr_7 [20] ;
unsigned int arr_10 [20] [20] [20] ;
unsigned char arr_11 [20] [20] [20] ;
_Bool arr_18 [17] ;
signed char arr_19 [17] ;
unsigned int arr_6 [22] ;
_Bool arr_9 [20] [20] ;
unsigned short arr_16 [20] [20] [20] ;
unsigned char arr_20 [17] ;
unsigned long long int arr_21 [17] ;
int arr_22 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)8310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1584841571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4259596006U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4026260038U : 2064903114U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)46898;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 4504648509874705935ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 94032471;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
