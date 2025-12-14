#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2138000978U;
unsigned int var_7 = 141082241U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 4105268914U;
unsigned int var_19 = 2743206880U;
unsigned int var_20 = 1021006760U;
unsigned short var_21 = (unsigned short)47305;
long long int var_22 = 3916151236424933733LL;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned int arr_5 [10] [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 3776442737U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)27190;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
