#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8060841195226805647ULL;
unsigned char var_2 = (unsigned char)84;
short var_3 = (short)23037;
long long int var_5 = -8879881516790802505LL;
unsigned short var_6 = (unsigned short)3146;
int var_7 = 1997103709;
unsigned char var_8 = (unsigned char)105;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 4860535945551600658LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 494581681U;
signed char var_14 = (signed char)-95;
int var_15 = 2140575053;
long long int arr_0 [20] ;
long long int arr_3 [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -4985757453589347925LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -8647147867125673600LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)185;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
