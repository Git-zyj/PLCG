#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24698;
signed char var_1 = (signed char)59;
unsigned long long int var_2 = 15776464420884793969ULL;
unsigned long long int var_3 = 103632926800119557ULL;
long long int var_10 = 3681488957224318428LL;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)120;
unsigned long long int var_14 = 2978855513376395270ULL;
long long int var_16 = -1821386815808484176LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-87;
unsigned long long int var_20 = 2778787007224318183ULL;
unsigned int var_21 = 273272906U;
long long int var_22 = -3599186993599798155LL;
long long int var_23 = 8893047549851990039LL;
unsigned long long int var_24 = 1439556745060625582ULL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2417897793U;
unsigned char var_27 = (unsigned char)34;
unsigned char var_28 = (unsigned char)120;
unsigned int arr_0 [19] ;
long long int arr_1 [19] ;
int arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
_Bool arr_5 [19] ;
int arr_6 [19] ;
signed char arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2379503234U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -497587111089827253LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1634646923;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1473408158702575354ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -990460438;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-67;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
