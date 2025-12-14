#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54707;
unsigned int var_6 = 2131953974U;
unsigned int var_7 = 705601133U;
unsigned long long int var_8 = 13107765109856286171ULL;
int zero = 0;
unsigned int var_10 = 744313321U;
signed char var_11 = (signed char)83;
unsigned int var_12 = 4270539436U;
unsigned int arr_0 [10] ;
unsigned char arr_1 [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2416333186U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3076606963U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
