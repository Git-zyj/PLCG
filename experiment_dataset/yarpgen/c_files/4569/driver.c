#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1233926038;
unsigned char var_1 = (unsigned char)11;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)88;
signed char var_6 = (signed char)-37;
unsigned short var_8 = (unsigned short)53007;
unsigned char var_9 = (unsigned char)221;
unsigned short var_11 = (unsigned short)9182;
unsigned short var_14 = (unsigned short)63792;
int zero = 0;
unsigned int var_15 = 4174843698U;
unsigned short var_16 = (unsigned short)38806;
unsigned long long int var_17 = 8933840167089735150ULL;
int var_18 = 1012080830;
unsigned short var_19 = (unsigned short)46209;
long long int var_20 = -6227795859219434116LL;
_Bool var_21 = (_Bool)0;
signed char arr_1 [19] ;
int arr_2 [19] [19] ;
unsigned long long int arr_7 [14] ;
unsigned int arr_3 [19] [19] ;
unsigned short arr_4 [19] ;
unsigned int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -109300511;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 16356438553103461806ULL : 2360411972809812768ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 739366029U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)62570;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3596055768U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
