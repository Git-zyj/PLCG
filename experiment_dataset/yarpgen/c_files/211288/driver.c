#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
unsigned long long int var_2 = 15935487214092617798ULL;
long long int var_3 = -7859829770351665204LL;
short var_4 = (short)4478;
short var_8 = (short)224;
int zero = 0;
unsigned char var_10 = (unsigned char)149;
long long int var_11 = -667213549981047504LL;
signed char var_12 = (signed char)58;
short var_13 = (short)-21360;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-98;
int arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1721480630;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)55902;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8500220735904362620ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
