#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2308511709U;
unsigned char var_3 = (unsigned char)180;
short var_4 = (short)-183;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 699315468U;
short var_10 = (short)24614;
short var_11 = (short)-21124;
long long int var_12 = -5393379087596985904LL;
int zero = 0;
unsigned long long int var_13 = 1672907745179306769ULL;
signed char var_14 = (signed char)102;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17040428852352188840ULL;
unsigned char var_17 = (unsigned char)160;
short var_18 = (short)16143;
unsigned int var_19 = 1718036805U;
int var_20 = -345210669;
unsigned long long int var_21 = 1922209266630445355ULL;
unsigned short var_22 = (unsigned short)36156;
unsigned short var_23 = (unsigned short)21952;
unsigned char arr_0 [15] ;
unsigned short arr_1 [15] ;
signed char arr_2 [15] [15] [15] ;
short arr_3 [15] [15] ;
signed char arr_6 [15] ;
unsigned int arr_7 [15] [15] ;
long long int arr_8 [15] ;
signed char arr_10 [18] ;
short arr_11 [18] ;
signed char arr_13 [10] ;
int arr_14 [10] [10] ;
unsigned int arr_4 [15] ;
unsigned int arr_9 [15] [15] [15] [15] ;
int arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)4453;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)21481;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3400336707U : 2562683470U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -5954564129764631515LL : 4226872204644636570LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)27018;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -1871265636 : 1511062490;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1621801572U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4045824483U : 3799134780U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 179166824 : 2093368489;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
