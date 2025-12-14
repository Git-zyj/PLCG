#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1280971001;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-28976;
long long int var_6 = -5701536191883184012LL;
unsigned long long int var_8 = 40192979241220487ULL;
int zero = 0;
signed char var_10 = (signed char)126;
signed char var_11 = (signed char)-20;
unsigned short var_12 = (unsigned short)6433;
unsigned char var_13 = (unsigned char)27;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_0 [25] ;
_Bool arr_2 [25] ;
unsigned short arr_3 [25] ;
unsigned long long int arr_4 [25] ;
int arr_5 [25] ;
unsigned int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 11193371243599862335ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)13758;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 13363348606518815987ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 399481324;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 4197662303U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
