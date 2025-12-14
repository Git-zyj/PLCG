#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6472837070825801834ULL;
unsigned char var_4 = (unsigned char)81;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 13545851136276106541ULL;
signed char var_9 = (signed char)70;
long long int var_11 = 2942291871125439516LL;
signed char var_14 = (signed char)81;
long long int var_15 = 8768605511300579753LL;
int var_16 = -1048792743;
unsigned long long int var_17 = 7761056790990891511ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)64004;
short var_19 = (short)6688;
_Bool var_20 = (_Bool)1;
long long int arr_0 [12] ;
long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4408397023914661650LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8013422744338253724LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)13583;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 998281213;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
