#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 2098741718;
short var_2 = (short)-1799;
long long int var_3 = -3201922829652744545LL;
short var_4 = (short)14413;
unsigned short var_5 = (unsigned short)830;
unsigned int var_8 = 3765003472U;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
unsigned short var_10 = (unsigned short)32606;
int var_11 = -1709082921;
short var_12 = (short)21105;
long long int var_13 = 1763600748388447877LL;
short var_14 = (short)-16782;
int var_15 = -753799247;
unsigned short var_16 = (unsigned short)7370;
long long int var_17 = -4169948467417160213LL;
int arr_1 [14] ;
int arr_4 [14] ;
unsigned int arr_7 [14] [14] [14] [14] ;
unsigned char arr_9 [14] [14] [14] ;
long long int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 458252432;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1490141340;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 716572711U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 256953048592546627LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
