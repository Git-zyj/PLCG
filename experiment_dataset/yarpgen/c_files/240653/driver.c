#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1416071880U;
unsigned long long int var_3 = 14665346180286094151ULL;
signed char var_6 = (signed char)-86;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-105;
signed char var_12 = (signed char)77;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)25177;
short var_16 = (short)30731;
unsigned int arr_0 [24] ;
_Bool arr_4 [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3564047255U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1934655555897344740ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 9873867075138543320ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2651562213418961907ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
