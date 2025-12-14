#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)32;
unsigned long long int var_6 = 2202983913524228261ULL;
unsigned long long int var_8 = 2731835104629965405ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)105;
short var_14 = (short)21087;
long long int var_16 = -8291808032663405230LL;
unsigned short var_17 = (unsigned short)2785;
int zero = 0;
unsigned long long int var_19 = 10966784032276209580ULL;
unsigned int var_20 = 3047131547U;
unsigned long long int var_21 = 5322530679171229857ULL;
unsigned short var_22 = (unsigned short)48204;
unsigned long long int var_23 = 2313902734246092248ULL;
unsigned int arr_1 [24] ;
unsigned short arr_3 [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1065838240U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)54284;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -8792225115040771516LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
