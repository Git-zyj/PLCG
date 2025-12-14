#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36582;
unsigned long long int var_2 = 1303369972652740965ULL;
short var_4 = (short)-1530;
long long int var_6 = 8265771127192672815LL;
unsigned int var_9 = 929583327U;
short var_11 = (short)22191;
unsigned short var_12 = (unsigned short)50816;
short var_17 = (short)-30679;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3547274941U;
int var_20 = 1156827949;
unsigned long long int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_2 [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 18332309134337794709ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2518092579U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)26424;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
