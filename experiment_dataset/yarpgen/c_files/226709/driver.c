#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)197;
unsigned long long int var_3 = 35095632918581355ULL;
long long int var_5 = -6680939274097108968LL;
unsigned long long int var_9 = 14007825341521797992ULL;
short var_11 = (short)10133;
short var_12 = (short)-25526;
int zero = 0;
short var_13 = (short)28235;
long long int var_14 = 8422525259667644566LL;
unsigned int var_15 = 2857908749U;
signed char var_16 = (signed char)-43;
int var_17 = -835117063;
unsigned long long int var_18 = 9873540239397949867ULL;
signed char var_19 = (signed char)-7;
unsigned long long int arr_1 [13] ;
signed char arr_4 [13] ;
_Bool arr_2 [13] [13] ;
signed char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2003913284999883192ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-5;
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
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
