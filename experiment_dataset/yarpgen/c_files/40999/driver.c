#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -814806285;
long long int var_1 = -7124480031055798202LL;
unsigned char var_2 = (unsigned char)99;
long long int var_3 = -5785953769198633301LL;
signed char var_7 = (signed char)-67;
long long int var_9 = 4971423397167164697LL;
_Bool var_12 = (_Bool)1;
int var_13 = 9479093;
unsigned int var_15 = 606719912U;
int var_16 = 441821173;
int zero = 0;
signed char var_18 = (signed char)-100;
long long int var_19 = -5305475640493804711LL;
long long int var_20 = 2806260281745479940LL;
unsigned short var_21 = (unsigned short)4117;
unsigned short var_22 = (unsigned short)58629;
long long int var_23 = 1332438984464683635LL;
unsigned long long int arr_1 [19] [19] ;
signed char arr_2 [19] ;
long long int arr_6 [11] ;
unsigned short arr_7 [11] ;
unsigned char arr_9 [23] [23] ;
long long int arr_11 [23] ;
long long int arr_3 [19] [19] ;
signed char arr_4 [19] ;
unsigned long long int arr_5 [19] ;
short arr_8 [11] [11] ;
unsigned char arr_12 [23] ;
_Bool arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 6934978483115593450ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -2759339328498390503LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)53759;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1402481653434707351LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3790587672881859142LL : 5064068563558935244LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 17573431174910037523ULL : 3734412382445814025ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (short)6030;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
