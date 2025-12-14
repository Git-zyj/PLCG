#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24629;
signed char var_2 = (signed char)-59;
unsigned short var_4 = (unsigned short)30054;
unsigned short var_9 = (unsigned short)12040;
unsigned long long int var_13 = 10161149053160095666ULL;
int zero = 0;
short var_16 = (short)-20601;
short var_17 = (short)6501;
signed char var_18 = (signed char)-18;
unsigned long long int var_19 = 16532802260749534763ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_0 [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 13602969430676094099ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -331742068;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
