#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31355;
unsigned char var_3 = (unsigned char)241;
unsigned int var_6 = 3791419677U;
unsigned char var_7 = (unsigned char)229;
unsigned long long int var_8 = 3302051980968422129ULL;
unsigned short var_10 = (unsigned short)36697;
int zero = 0;
unsigned long long int var_11 = 3473061777124740968ULL;
unsigned int var_12 = 3849397748U;
unsigned long long int var_13 = 5526084165249714284ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6514153390398397333ULL;
unsigned int var_16 = 1680594964U;
unsigned int var_17 = 778171066U;
unsigned char arr_1 [21] ;
long long int arr_2 [21] ;
long long int arr_3 [21] [21] ;
signed char arr_4 [21] ;
_Bool arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3259059050830903175LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 8753375228838493316LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
