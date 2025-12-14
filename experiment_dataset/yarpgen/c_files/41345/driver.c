#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1682441601;
short var_4 = (short)-9826;
unsigned long long int var_5 = 311498201995958967ULL;
unsigned int var_7 = 3813298210U;
signed char var_9 = (signed char)-99;
_Bool var_10 = (_Bool)1;
int var_15 = 1523593500;
int zero = 0;
short var_16 = (short)-18206;
unsigned int var_17 = 1880894648U;
int var_18 = -320124663;
unsigned short var_19 = (unsigned short)57628;
short var_20 = (short)29303;
int arr_1 [10] [10] ;
unsigned int arr_3 [10] ;
long long int arr_4 [10] ;
long long int arr_9 [21] [21] ;
unsigned int arr_10 [21] [21] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -660857276;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 683902463U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7480646584196351062LL : -891771484333020872LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 9075919796581728974LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 87142204U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)3923 : (short)24912;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
