#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26763;
unsigned int var_2 = 2539502728U;
unsigned int var_3 = 2374246944U;
unsigned int var_5 = 2687899744U;
short var_6 = (short)24290;
unsigned short var_9 = (unsigned short)31456;
int zero = 0;
short var_14 = (short)5233;
long long int var_15 = -5251131516340969927LL;
signed char var_16 = (signed char)3;
long long int var_17 = -7428851482727393685LL;
signed char arr_2 [11] ;
short arr_3 [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-30711 : (short)28954;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21400 : (unsigned short)6935;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
