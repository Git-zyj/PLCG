#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34490;
signed char var_3 = (signed char)-68;
unsigned short var_5 = (unsigned short)20636;
signed char var_7 = (signed char)31;
unsigned long long int var_11 = 10889098123736091337ULL;
unsigned long long int var_13 = 3136380586791038681ULL;
unsigned char var_15 = (unsigned char)181;
int zero = 0;
unsigned char var_17 = (unsigned char)144;
unsigned char var_18 = (unsigned char)176;
int var_19 = 1008919442;
unsigned long long int var_20 = 8363410723753936573ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned char arr_2 [15] [15] ;
unsigned int arr_7 [15] ;
unsigned long long int arr_3 [15] ;
int arr_4 [15] [15] ;
unsigned char arr_15 [15] ;
_Bool arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 14906044092644900476ULL : 5924972136125070569ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)146 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3522638487U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 10290253222418246463ULL : 6139091613833704153ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1764958751 : -1277282943;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
