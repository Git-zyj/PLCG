#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27880;
unsigned long long int var_5 = 7090426262310536779ULL;
unsigned long long int var_7 = 1351017239292698999ULL;
signed char var_8 = (signed char)-96;
short var_10 = (short)32262;
unsigned short var_12 = (unsigned short)11252;
long long int var_13 = -4980107900675609804LL;
int zero = 0;
long long int var_14 = -6296728308781207910LL;
unsigned long long int var_15 = 5709567677245703076ULL;
long long int var_16 = 6524729816221344840LL;
unsigned short var_17 = (unsigned short)11640;
unsigned long long int var_18 = 11059337394149503539ULL;
unsigned int var_19 = 801150952U;
unsigned long long int var_20 = 15573410568156724850ULL;
_Bool var_21 = (_Bool)1;
unsigned int arr_0 [10] [10] ;
unsigned int arr_1 [10] ;
unsigned int arr_3 [10] ;
signed char arr_5 [14] [14] ;
unsigned int arr_6 [14] [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_8 [14] [14] ;
_Bool arr_12 [14] ;
unsigned char arr_16 [14] [14] ;
unsigned long long int arr_4 [10] ;
long long int arr_17 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4061867670U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 213395637U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2640867932U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 3130575429U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 634434806U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 252733214U : 634192682U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)214 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 10768676452902297982ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2291346853960544354LL : 4794569859799508789LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
