#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1436330601U;
_Bool var_3 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 9187027087423432337ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 709488619U;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-4410;
unsigned short var_21 = (unsigned short)36646;
signed char var_22 = (signed char)114;
unsigned short var_23 = (unsigned short)36348;
signed char arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2168279898U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 16746476942230238075ULL : 10964511470329883660ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 787517179 : -188889304;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
