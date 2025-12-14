#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned int var_1 = 383209424U;
int var_2 = -1432594577;
int var_3 = -1075027705;
short var_4 = (short)-4483;
unsigned short var_5 = (unsigned short)28302;
signed char var_7 = (signed char)-124;
unsigned char var_8 = (unsigned char)5;
long long int var_13 = -7949957215498438582LL;
unsigned int var_14 = 1635861680U;
signed char var_16 = (signed char)47;
int zero = 0;
long long int var_18 = 4528670948685051278LL;
short var_19 = (short)23021;
int var_20 = 1242902511;
unsigned long long int var_21 = 10532300738287729052ULL;
signed char var_22 = (signed char)-5;
long long int var_23 = -9187862433421467534LL;
unsigned int var_24 = 886575507U;
long long int var_25 = 5167550858103977307LL;
signed char arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned char arr_8 [12] ;
_Bool arr_10 [12] ;
unsigned int arr_12 [25] ;
unsigned char arr_13 [25] [25] ;
_Bool arr_16 [22] ;
unsigned int arr_7 [10] [10] ;
short arr_11 [12] [12] ;
unsigned char arr_14 [25] ;
unsigned short arr_15 [25] ;
_Bool arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3291760414U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3809582763U : 155711654U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1390713485U : 1878265985U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)18334 : (short)1777;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42557 : (unsigned short)53963;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
