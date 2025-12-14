#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50181;
signed char var_5 = (signed char)-97;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 553704219U;
signed char var_12 = (signed char)56;
unsigned char var_13 = (unsigned char)193;
signed char var_15 = (signed char)31;
int zero = 0;
signed char var_19 = (signed char)-62;
unsigned int var_20 = 1603215837U;
unsigned short var_21 = (unsigned short)48255;
signed char var_22 = (signed char)-83;
signed char var_23 = (signed char)-22;
int arr_0 [23] ;
unsigned int arr_2 [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -648531730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2752963802U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 67572455;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
