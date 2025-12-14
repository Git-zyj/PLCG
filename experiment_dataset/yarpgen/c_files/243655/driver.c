#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62459;
long long int var_2 = -4429144633424453547LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)112;
short var_7 = (short)-5657;
unsigned int var_9 = 1064134731U;
int zero = 0;
unsigned long long int var_12 = 16088660452804533166ULL;
unsigned short var_13 = (unsigned short)13790;
unsigned long long int var_14 = 544833969828910096ULL;
unsigned long long int var_15 = 8713035099881307696ULL;
unsigned long long int var_16 = 3117735854478441054ULL;
unsigned short var_17 = (unsigned short)28193;
unsigned int var_18 = 2300823122U;
short var_19 = (short)25963;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_3 [14] [14] ;
long long int arr_8 [15] ;
unsigned long long int arr_9 [15] [15] ;
signed char arr_10 [15] ;
unsigned char arr_7 [14] [14] ;
unsigned long long int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 10524637275082400561ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 9666802114913465866ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1621950395151356377LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 10330064815236621825ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 13242877124635785633ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
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
