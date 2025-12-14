#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 14976018678201821659ULL;
unsigned long long int var_7 = 6894631824328749709ULL;
long long int var_9 = 3034290123513115090LL;
unsigned int var_13 = 1723953068U;
unsigned long long int var_15 = 3911462893957483845ULL;
int zero = 0;
unsigned int var_17 = 3961278641U;
unsigned char var_18 = (unsigned char)139;
long long int var_19 = -6860010193838164450LL;
unsigned short var_20 = (unsigned short)28332;
unsigned long long int arr_1 [16] ;
signed char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7176016681898279182ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)44;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
