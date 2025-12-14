#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18444;
unsigned long long int var_1 = 6195404977263991169ULL;
signed char var_2 = (signed char)30;
short var_5 = (short)2144;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)140;
unsigned int var_8 = 3770043522U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2109568465U;
long long int var_11 = -7878775633472798539LL;
signed char var_13 = (signed char)-112;
int zero = 0;
short var_14 = (short)-28103;
unsigned char var_15 = (unsigned char)215;
long long int var_16 = -8958363448011213338LL;
int var_17 = 2078250801;
unsigned short var_18 = (unsigned short)62105;
short var_19 = (short)-31887;
int var_20 = 2135413767;
long long int var_21 = -2713207521052373703LL;
unsigned char var_22 = (unsigned char)248;
signed char arr_2 [14] ;
unsigned int arr_14 [14] ;
long long int arr_17 [14] [14] [14] ;
int arr_22 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 113473542U : 2372594264U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 6548495338051478542LL : -8653016696150324953LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? -16690044 : 589693081;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
