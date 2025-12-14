#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -905240994;
unsigned long long int var_5 = 8470276875370424978ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 3309753913088893288ULL;
unsigned short var_15 = (unsigned short)31314;
int zero = 0;
unsigned int var_18 = 1258162942U;
unsigned short var_19 = (unsigned short)61807;
short var_20 = (short)3825;
signed char var_21 = (signed char)-56;
short var_22 = (short)18704;
_Bool var_23 = (_Bool)0;
unsigned long long int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 9464554556416207022ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
