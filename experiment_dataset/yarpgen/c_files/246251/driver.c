#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35783;
unsigned int var_1 = 493326631U;
unsigned short var_3 = (unsigned short)41446;
unsigned long long int var_4 = 11148176830487222066ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1347504310U;
unsigned int var_8 = 1822426163U;
unsigned short var_10 = (unsigned short)47238;
unsigned int var_13 = 756733463U;
unsigned long long int var_14 = 11133366765713973701ULL;
long long int var_15 = -949931450656640900LL;
int zero = 0;
unsigned int var_17 = 925213270U;
unsigned int var_18 = 3972842058U;
unsigned long long int var_19 = 4866293773349545432ULL;
unsigned int var_20 = 3549237131U;
unsigned int var_21 = 337335390U;
long long int var_22 = 7236563468345081960LL;
unsigned short var_23 = (unsigned short)35891;
unsigned short var_24 = (unsigned short)2085;
_Bool arr_1 [23] ;
_Bool arr_2 [23] [23] ;
_Bool arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
long long int arr_8 [20] ;
unsigned char arr_9 [20] [20] ;
unsigned long long int arr_3 [23] ;
long long int arr_7 [20] [20] ;
unsigned int arr_15 [20] [20] [20] ;
unsigned char arr_16 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 952129464U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -8711500825342684033LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 10783303033590204418ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -243512626330761876LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2921000030U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned char)81;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
