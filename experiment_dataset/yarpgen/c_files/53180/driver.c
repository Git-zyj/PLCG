#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1721455205;
int var_1 = -302280101;
int var_6 = -108859810;
unsigned short var_9 = (unsigned short)20611;
unsigned long long int var_10 = 15658500184832522832ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3131878183U;
int zero = 0;
int var_16 = -1713469047;
unsigned int var_17 = 2188117052U;
int var_18 = 719709557;
unsigned char var_19 = (unsigned char)87;
int var_20 = 1365766832;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_4 [22] ;
int arr_2 [25] ;
int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 11592082163599248792ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 16416168163734312893ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2057502303;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -1682929808;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
