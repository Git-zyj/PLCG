#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-64;
_Bool var_7 = (_Bool)0;
short var_8 = (short)20274;
signed char var_10 = (signed char)72;
long long int var_11 = -3227639695999509715LL;
signed char var_15 = (signed char)-37;
unsigned short var_17 = (unsigned short)53303;
int var_18 = 1776238981;
int zero = 0;
signed char var_20 = (signed char)12;
long long int var_21 = -6563694862994062488LL;
unsigned int var_22 = 916113192U;
short var_23 = (short)-4198;
long long int var_24 = 1847117335010715774LL;
unsigned int arr_0 [17] [17] ;
_Bool arr_1 [17] ;
signed char arr_2 [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3814025694U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1807647559111249695LL : -5475617827774901995LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
