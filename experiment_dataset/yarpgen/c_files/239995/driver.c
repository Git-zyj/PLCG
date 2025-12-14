#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29868;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_9 = (short)23373;
int zero = 0;
unsigned int var_11 = 315252053U;
unsigned long long int var_12 = 8984730317061369237ULL;
short var_13 = (short)23986;
signed char var_14 = (signed char)36;
int var_15 = 80075406;
short var_16 = (short)1832;
unsigned long long int var_17 = 9843972110704206766ULL;
int var_18 = -1005986991;
int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -483051508;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3592886033515518077ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)10758;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
