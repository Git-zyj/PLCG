#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5140197648493291006LL;
unsigned int var_1 = 2142615067U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)150;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 11684539430634708146ULL;
signed char var_9 = (signed char)91;
unsigned short var_10 = (unsigned short)52484;
unsigned short var_12 = (unsigned short)20279;
int zero = 0;
signed char var_15 = (signed char)-71;
signed char var_16 = (signed char)-115;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-27954;
unsigned char var_19 = (unsigned char)218;
long long int arr_0 [20] ;
long long int arr_1 [20] [20] ;
signed char arr_3 [20] [20] [20] ;
unsigned char arr_4 [20] [20] [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2404067040185002587LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -7169210173851144700LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)76;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
