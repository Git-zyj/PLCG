#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6531;
unsigned int var_1 = 2804534597U;
short var_2 = (short)29547;
unsigned int var_3 = 2400439333U;
long long int var_4 = 8620888458057040303LL;
unsigned char var_7 = (unsigned char)183;
signed char var_8 = (signed char)103;
long long int var_9 = -2062163498624183034LL;
long long int var_10 = 4601183046496416353LL;
int var_13 = 893787204;
int zero = 0;
unsigned int var_17 = 3595907829U;
int var_18 = 686339687;
short var_19 = (short)18254;
short var_20 = (short)3461;
unsigned char arr_1 [19] [19] ;
short arr_2 [19] ;
unsigned char arr_3 [19] [19] [19] ;
unsigned char arr_4 [19] ;
unsigned char arr_9 [19] [19] [19] ;
unsigned int arr_5 [19] ;
short arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)26415;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)187 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3558365469U : 1796220773U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)8290 : (short)-28746;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
