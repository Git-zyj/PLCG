#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1866515741977229403LL;
unsigned short var_1 = (unsigned short)23279;
long long int var_3 = 355126044386938381LL;
_Bool var_4 = (_Bool)1;
long long int var_10 = -237813928567769775LL;
unsigned int var_13 = 1107554057U;
int zero = 0;
short var_16 = (short)31617;
signed char var_17 = (signed char)-9;
unsigned char arr_0 [18] ;
unsigned int arr_1 [18] ;
long long int arr_5 [12] ;
int arr_2 [18] ;
unsigned int arr_3 [18] ;
long long int arr_7 [12] ;
unsigned char arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)167 : (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1667349254U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 6970049076540769669LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 543861449 : 649949038;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2513887572U : 857518541U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1170577002574969012LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)5;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
