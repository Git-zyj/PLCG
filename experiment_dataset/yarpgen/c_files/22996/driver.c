#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-88;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 121505164U;
int zero = 0;
unsigned short var_20 = (unsigned short)55682;
unsigned short var_21 = (unsigned short)43064;
signed char var_22 = (signed char)28;
signed char var_23 = (signed char)34;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)210;
signed char var_26 = (signed char)86;
_Bool arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 16759321123982897378ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
