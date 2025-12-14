#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7040;
long long int var_6 = -8609733728471356385LL;
unsigned long long int var_7 = 9677200729624788847ULL;
unsigned long long int var_8 = 12415966280270723849ULL;
short var_9 = (short)-12174;
int var_10 = 373500834;
signed char var_12 = (signed char)73;
unsigned long long int var_13 = 5337436603215010721ULL;
unsigned char var_15 = (unsigned char)44;
int zero = 0;
int var_16 = -933220127;
unsigned long long int var_17 = 4318529913289493210ULL;
unsigned char var_18 = (unsigned char)233;
unsigned char var_19 = (unsigned char)204;
unsigned int var_20 = 1035235238U;
unsigned short var_21 = (unsigned short)37364;
unsigned long long int var_22 = 13931631564130224093ULL;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_2 [24] ;
long long int arr_6 [24] ;
unsigned long long int arr_10 [16] ;
long long int arr_11 [16] ;
long long int arr_4 [24] ;
unsigned long long int arr_8 [24] ;
unsigned char arr_9 [24] ;
_Bool arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 15315187955095414318ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4843508530135745385LL : 8191913785844468030LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 13449610343784968273ULL : 2401039896777315228ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -7055117529937384546LL : -2303328037144882739LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -5801791947213849978LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 13767682349842141951ULL : 8197031956207882323ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
