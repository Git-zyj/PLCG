#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1306875070;
unsigned long long int var_4 = 11497693318735895366ULL;
unsigned long long int var_6 = 6141686375312905702ULL;
unsigned char var_9 = (unsigned char)218;
unsigned short var_12 = (unsigned short)37641;
int zero = 0;
long long int var_16 = 6781674545446787442LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12410960480380821824ULL;
unsigned long long int var_19 = 2162979336646052939ULL;
unsigned short var_20 = (unsigned short)58109;
unsigned short var_21 = (unsigned short)28685;
short var_22 = (short)-24800;
long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_5 [18] ;
unsigned char arr_4 [18] ;
long long int arr_9 [18] ;
unsigned char arr_10 [18] ;
unsigned short arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3566845413533909176LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13845058669843552988ULL : 5244457322433975096ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 5641204368373190925ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 7904940689536647223LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)31375;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
