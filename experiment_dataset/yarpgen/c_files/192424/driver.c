#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22654;
short var_2 = (short)17846;
unsigned int var_6 = 3386041082U;
unsigned int var_10 = 2807025682U;
unsigned long long int var_15 = 3693236763802340989ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)35565;
unsigned int var_18 = 2401126961U;
signed char var_19 = (signed char)67;
int var_20 = -43262462;
signed char var_21 = (signed char)-80;
unsigned long long int var_22 = 8385798197799273693ULL;
_Bool arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
long long int arr_6 [24] ;
unsigned int arr_7 [24] ;
_Bool arr_3 [10] ;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 15474523787317220748ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1617444651U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3034393755339079770LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2898574821U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 5426365190765820695ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
