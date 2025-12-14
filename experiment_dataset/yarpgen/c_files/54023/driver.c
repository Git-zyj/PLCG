#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)24984;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-113;
unsigned char var_6 = (unsigned char)165;
signed char var_8 = (signed char)72;
int var_10 = 1070743290;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)27530;
int zero = 0;
unsigned long long int var_14 = 2199503749267263196ULL;
unsigned long long int var_15 = 12759222000541909360ULL;
int var_16 = -121866626;
unsigned short var_17 = (unsigned short)65206;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)66;
signed char arr_0 [17] ;
unsigned int arr_5 [20] ;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1366349194U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)233;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
