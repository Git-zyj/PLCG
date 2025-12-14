#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30546;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6275048406656813324LL;
short var_8 = (short)-17928;
unsigned char var_9 = (unsigned char)129;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 4229297617U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3621443846U;
long long int var_19 = 1384755715480450289LL;
unsigned char var_20 = (unsigned char)94;
unsigned char var_21 = (unsigned char)212;
unsigned short arr_0 [25] [25] ;
long long int arr_1 [25] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)63534;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4331063475653663391LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
