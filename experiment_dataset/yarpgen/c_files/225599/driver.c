#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2446269444U;
_Bool var_1 = (_Bool)0;
long long int var_2 = 3119217798412426193LL;
short var_3 = (short)-19870;
long long int var_4 = 9094061972699122860LL;
signed char var_5 = (signed char)6;
short var_9 = (short)-5690;
unsigned int var_10 = 3119106126U;
int zero = 0;
unsigned short var_14 = (unsigned short)50259;
short var_15 = (short)-27996;
short var_16 = (short)-6953;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5017379720350297221LL;
signed char arr_0 [15] ;
signed char arr_1 [15] ;
signed char arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)31;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
