#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3660554833U;
signed char var_1 = (signed char)-37;
unsigned char var_4 = (unsigned char)198;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-30;
unsigned int var_8 = 4159721104U;
signed char var_9 = (signed char)21;
unsigned long long int var_11 = 17054040460160751150ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)26232;
unsigned short var_13 = (unsigned short)53951;
unsigned short var_14 = (unsigned short)17815;
unsigned short var_15 = (unsigned short)6953;
long long int var_16 = -739873315618917310LL;
unsigned int var_17 = 3052572157U;
unsigned short var_18 = (unsigned short)19509;
short var_19 = (short)-15580;
signed char var_20 = (signed char)-101;
unsigned long long int var_21 = 9991729116984917298ULL;
unsigned int var_22 = 3512098128U;
unsigned long long int var_23 = 8067931097831477541ULL;
short arr_2 [22] ;
signed char arr_3 [22] ;
_Bool arr_4 [22] ;
signed char arr_5 [22] [22] ;
unsigned long long int arr_12 [22] ;
long long int arr_16 [22] [22] ;
unsigned long long int arr_17 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-22386;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 10456253468287160183ULL : 5814136646321422138ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -7628799207166036394LL : 7935044313515795650LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 4098794653711162697ULL : 4038267768175274483ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
