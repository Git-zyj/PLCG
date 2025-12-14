#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
int var_1 = -1702122422;
unsigned int var_3 = 3846655867U;
long long int var_4 = 3464533705599761436LL;
long long int var_6 = 5602668830823940799LL;
signed char var_7 = (signed char)44;
signed char var_8 = (signed char)-62;
int var_9 = 967428829;
int zero = 0;
unsigned char var_10 = (unsigned char)195;
unsigned short var_11 = (unsigned short)12678;
long long int var_12 = -6430610657338614247LL;
signed char var_13 = (signed char)-75;
unsigned char var_14 = (unsigned char)233;
unsigned int var_15 = 1982282391U;
unsigned long long int var_16 = 26175396395506609ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 246645252;
unsigned int arr_0 [15] ;
long long int arr_2 [15] ;
unsigned short arr_6 [20] ;
long long int arr_7 [20] [20] ;
unsigned char arr_3 [15] ;
long long int arr_4 [15] ;
unsigned int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4026022236U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1212055041897503172LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)22270;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -8872448544277701946LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2473674903334878907LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1338315041U;
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
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
