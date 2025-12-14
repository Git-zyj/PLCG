#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)38;
short var_7 = (short)-5519;
unsigned int var_8 = 783321239U;
int zero = 0;
unsigned char var_12 = (unsigned char)64;
long long int var_13 = -7107699252020770196LL;
unsigned char var_14 = (unsigned char)230;
long long int var_15 = -3135946327153776415LL;
_Bool var_16 = (_Bool)0;
unsigned int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned int arr_3 [25] ;
unsigned int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3373166943U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3033345360U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2827486791U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
