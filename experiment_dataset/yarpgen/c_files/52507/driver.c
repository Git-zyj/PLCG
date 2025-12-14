#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
long long int var_1 = -6808156086384253023LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3197686708U;
unsigned int var_5 = 422811805U;
unsigned long long int var_6 = 3750856347065146245ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -2023517536;
unsigned long long int var_10 = 7955540776758932694ULL;
signed char var_11 = (signed char)11;
int zero = 0;
unsigned int var_12 = 3949734325U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 14142736130274920378ULL;
unsigned short var_15 = (unsigned short)29263;
int var_16 = -1007609368;
long long int var_17 = -2066634875376985181LL;
signed char var_18 = (signed char)-105;
unsigned int var_19 = 1727394065U;
signed char var_20 = (signed char)120;
long long int var_21 = 3476047706392595668LL;
unsigned int var_22 = 319311979U;
unsigned long long int var_23 = 9011959902503067084ULL;
_Bool var_24 = (_Bool)1;
unsigned short arr_1 [23] ;
short arr_2 [23] ;
short arr_3 [23] [23] [23] ;
unsigned char arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] ;
unsigned char arr_7 [18] ;
unsigned int arr_8 [18] ;
int arr_9 [18] [18] ;
int arr_11 [18] [18] [18] [18] ;
int arr_16 [21] ;
unsigned short arr_18 [21] ;
unsigned short arr_20 [20] ;
short arr_6 [23] [23] ;
short arr_15 [18] ;
int arr_21 [20] ;
unsigned int arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)23807;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-5456;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)15595;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)25349;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 4058750858U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = -1769185791;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 659356774;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = -1216389747;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned short)41001;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned short)34662;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-10744;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)-28446;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 1614333229;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 1003788947U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
