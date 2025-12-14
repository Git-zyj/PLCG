#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11425;
signed char var_3 = (signed char)-103;
unsigned int var_4 = 2080995499U;
_Bool var_5 = (_Bool)0;
int var_6 = 1250229507;
short var_7 = (short)8511;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = -480879522;
int var_11 = 1571076072;
short var_12 = (short)-27556;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 796918624;
signed char var_15 = (signed char)-52;
_Bool var_16 = (_Bool)1;
int var_17 = 884114752;
short var_18 = (short)3901;
int var_19 = 1422622221;
_Bool arr_0 [13] ;
long long int arr_1 [13] [13] ;
int arr_3 [13] ;
_Bool arr_2 [13] ;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -901299254120921757LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 827029383;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3815302567U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
