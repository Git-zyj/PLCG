#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
short var_1 = (short)11003;
unsigned long long int var_5 = 8258532389661009094ULL;
unsigned short var_9 = (unsigned short)47307;
unsigned long long int var_12 = 3478036633132635088ULL;
signed char var_13 = (signed char)46;
short var_15 = (short)28831;
int zero = 0;
long long int var_18 = 1175776733036931737LL;
int var_19 = 578015070;
unsigned short var_20 = (unsigned short)25208;
unsigned short var_21 = (unsigned short)36014;
unsigned long long int var_22 = 3140028946119373927ULL;
int var_23 = 68764830;
_Bool arr_0 [20] ;
unsigned short arr_2 [20] [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)34007;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -436836224887858517LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
