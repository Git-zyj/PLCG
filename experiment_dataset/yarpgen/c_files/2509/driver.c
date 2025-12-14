#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3312021956U;
unsigned short var_1 = (unsigned short)34769;
unsigned int var_2 = 1371249882U;
signed char var_7 = (signed char)-88;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-66;
unsigned int var_11 = 4275646656U;
unsigned long long int var_12 = 17514121805953334138ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-85;
unsigned char var_16 = (unsigned char)24;
unsigned long long int var_17 = 9292074668609398767ULL;
signed char var_18 = (signed char)-117;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1704301556U;
unsigned int var_21 = 3608910191U;
unsigned int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
unsigned char arr_2 [25] ;
signed char arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
unsigned int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3604685487U : 1312890997U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2872556577U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)44 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3448219167U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 818088230U : 3643604695U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
