#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2159530421U;
unsigned int var_1 = 449428683U;
signed char var_3 = (signed char)76;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1395985600U;
unsigned long long int var_8 = 7004085079815717547ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3857800645U;
unsigned long long int var_13 = 13377714616476614684ULL;
unsigned int var_14 = 2773939248U;
unsigned int var_15 = 3719406179U;
unsigned int var_16 = 3923319486U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4273422967U;
unsigned long long int var_20 = 10405994875958795762ULL;
signed char arr_0 [24] ;
unsigned int arr_2 [24] [24] ;
unsigned int arr_3 [24] [24] ;
unsigned long long int arr_5 [24] ;
unsigned int arr_6 [24] ;
signed char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 95100658U : 3452435297U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1704326115U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 880556649167771273ULL : 4479685213423448942ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 973514891U : 1279033536U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-115 : (signed char)32;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
