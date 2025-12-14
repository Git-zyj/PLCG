#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1375962231;
short var_1 = (short)-11286;
signed char var_2 = (signed char)-70;
unsigned char var_3 = (unsigned char)174;
int var_5 = 700329694;
short var_8 = (short)-6176;
int var_10 = 183515181;
unsigned char var_12 = (unsigned char)3;
unsigned int var_14 = 3108682545U;
unsigned char var_16 = (unsigned char)152;
int zero = 0;
int var_20 = -416102630;
unsigned long long int var_21 = 14366220792584076345ULL;
signed char var_22 = (signed char)-92;
long long int var_23 = -6168454320592762251LL;
unsigned long long int var_24 = 10053433267968193704ULL;
unsigned short var_25 = (unsigned short)64114;
unsigned long long int arr_0 [24] ;
int arr_1 [24] ;
unsigned int arr_3 [24] [24] ;
signed char arr_5 [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_4 [24] ;
int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 16570429041975634364ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -34855764;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 2399713444U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 146239063 : -1179463138;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
