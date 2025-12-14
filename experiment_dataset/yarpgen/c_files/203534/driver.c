#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8483674541703449729LL;
short var_1 = (short)20159;
int var_2 = -1293040546;
int var_4 = -301019006;
unsigned char var_8 = (unsigned char)54;
unsigned char var_9 = (unsigned char)246;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 6067936388510076516LL;
unsigned char var_13 = (unsigned char)248;
unsigned char var_14 = (unsigned char)88;
unsigned int var_15 = 450613711U;
signed char var_16 = (signed char)-22;
int var_17 = -900162666;
_Bool var_18 = (_Bool)1;
signed char arr_1 [20] ;
_Bool arr_3 [21] ;
long long int arr_2 [20] ;
int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2033316686216797328LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -532629596;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
