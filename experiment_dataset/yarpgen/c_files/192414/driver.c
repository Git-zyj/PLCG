#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4146;
int var_1 = 376191845;
unsigned long long int var_2 = 1121744083975321829ULL;
unsigned int var_4 = 1598232936U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 6535814875430697857ULL;
int var_8 = 996651506;
_Bool var_9 = (_Bool)0;
long long int var_12 = -4199742619229867742LL;
unsigned long long int var_15 = 16389032054226196190ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)247;
int var_17 = -1575113329;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)26389;
long long int var_20 = -1168495082625287256LL;
unsigned long long int var_21 = 8393622762147601620ULL;
short var_22 = (short)31369;
unsigned char var_23 = (unsigned char)108;
_Bool var_24 = (_Bool)0;
short arr_0 [18] ;
short arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
unsigned long long int arr_6 [11] [11] ;
int arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)4733;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-24629;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13738;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 12447068545635864191ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = -531200013;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
