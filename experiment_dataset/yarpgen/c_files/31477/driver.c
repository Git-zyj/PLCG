#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1007877609U;
short var_6 = (short)-20749;
short var_7 = (short)24702;
short var_9 = (short)13418;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17203331662292742801ULL;
short var_14 = (short)690;
short var_15 = (short)1915;
unsigned int var_16 = 3654878596U;
unsigned long long int var_17 = 10526144904438385688ULL;
short var_18 = (short)29428;
unsigned long long int var_19 = 6164339830449757016ULL;
unsigned int var_20 = 967085753U;
unsigned short var_21 = (unsigned short)54975;
long long int var_22 = 2794069901750717872LL;
unsigned int var_23 = 3806139208U;
short var_24 = (short)12652;
short arr_0 [19] ;
long long int arr_1 [19] ;
long long int arr_3 [19] [19] ;
unsigned char arr_7 [19] [19] [19] ;
unsigned int arr_9 [19] [19] [19] ;
unsigned short arr_11 [16] ;
short arr_10 [19] ;
long long int arr_14 [16] ;
short arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)19150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7359291415068156268LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 3913892977869585602LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2564390273U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)24338;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-23146;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = -2643180560328926834LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (short)1176;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
