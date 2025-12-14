#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3967020409188703136ULL;
short var_4 = (short)-10575;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3461323164444760512LL;
unsigned int var_9 = 911490707U;
int zero = 0;
long long int var_12 = -8573021163299967638LL;
short var_13 = (short)1699;
short var_14 = (short)29271;
unsigned char var_15 = (unsigned char)134;
int var_16 = -254347039;
signed char var_17 = (signed char)-44;
unsigned long long int var_18 = 7407242293214955126ULL;
long long int var_19 = -4285485196117632577LL;
int var_20 = 1488075293;
unsigned int arr_0 [25] ;
signed char arr_2 [25] ;
unsigned int arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
unsigned char arr_21 [17] [17] [17] ;
unsigned int arr_3 [25] [25] ;
unsigned short arr_11 [17] [17] ;
unsigned int arr_12 [17] ;
unsigned int arr_16 [17] ;
unsigned short arr_26 [14] ;
long long int arr_27 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3169826114U : 1432281228U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 395736672U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1280270064U : 783925728U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)46853;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1763642670U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 1564115791U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27380 : (unsigned short)49608;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -7813630486442695119LL : -7857289165648370878LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
