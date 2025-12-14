#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13455;
signed char var_1 = (signed char)19;
_Bool var_3 = (_Bool)0;
short var_8 = (short)-31923;
long long int var_10 = -3265037271779221936LL;
unsigned int var_11 = 3116342424U;
int zero = 0;
signed char var_13 = (signed char)7;
unsigned int var_14 = 4206488454U;
long long int var_15 = -2895775997789577219LL;
unsigned long long int var_16 = 14112753687965585177ULL;
unsigned short var_17 = (unsigned short)43132;
unsigned int var_18 = 2273036363U;
int var_19 = -398766478;
long long int arr_0 [17] ;
int arr_1 [17] ;
signed char arr_3 [12] ;
unsigned long long int arr_7 [14] [14] ;
signed char arr_8 [14] ;
int arr_6 [12] ;
int arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -4045727251249751361LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1450116821;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 5532294346634946143ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -610355817;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = -525223816;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
