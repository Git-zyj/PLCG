#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7706986814959873706LL;
long long int var_3 = -1502983500220985607LL;
unsigned int var_4 = 3740506603U;
long long int var_6 = -6439415896319523077LL;
long long int var_9 = -2642598805086505950LL;
unsigned int var_11 = 4263457209U;
int zero = 0;
unsigned int var_13 = 1477728597U;
long long int var_14 = -3653267883113136120LL;
signed char var_15 = (signed char)35;
long long int var_16 = 2323572137873236693LL;
int var_17 = -873292400;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6343600688869002963LL;
signed char var_20 = (signed char)-63;
unsigned short var_21 = (unsigned short)56165;
unsigned short var_22 = (unsigned short)11364;
unsigned int var_23 = 2301765102U;
_Bool var_24 = (_Bool)1;
long long int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_2 [11] ;
int arr_3 [11] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1036787430303931673LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3481605438U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3894293040U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1009030270;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 186294268U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
