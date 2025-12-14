#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)63961;
long long int var_8 = 6895896978628849242LL;
unsigned long long int var_9 = 16689185070765148402ULL;
unsigned int var_10 = 3767007280U;
int zero = 0;
long long int var_17 = 3218616418101432964LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)47961;
long long int var_20 = -8825351836522612256LL;
unsigned long long int var_21 = 11619458470481372275ULL;
unsigned char var_22 = (unsigned char)184;
unsigned long long int var_23 = 14710477829261508862ULL;
unsigned long long int arr_2 [19] ;
long long int arr_3 [19] ;
unsigned int arr_6 [16] [16] ;
unsigned int arr_13 [16] ;
unsigned int arr_5 [19] ;
long long int arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3999990545387754520ULL : 11788481545279168577ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -5983015788235500418LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 3833352178U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2526812536U : 821873948U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 440967856U : 2710891506U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 6523775756639860117LL : -7451032564750501692LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
