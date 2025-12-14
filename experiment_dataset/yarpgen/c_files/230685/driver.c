#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8707629602726469968LL;
long long int var_2 = -9131980467752190687LL;
long long int var_5 = -6171979587702029247LL;
unsigned long long int var_9 = 1743191057439009074ULL;
long long int var_10 = -1063685771431797036LL;
int zero = 0;
long long int var_14 = 7011927603954893636LL;
unsigned long long int var_15 = 15926817106354675821ULL;
short var_16 = (short)-23294;
signed char var_17 = (signed char)-60;
unsigned short var_18 = (unsigned short)4202;
unsigned short var_19 = (unsigned short)48912;
int var_20 = 1857772252;
short var_21 = (short)7129;
unsigned short var_22 = (unsigned short)44675;
signed char var_23 = (signed char)-10;
unsigned int var_24 = 1853103468U;
_Bool var_25 = (_Bool)1;
unsigned short arr_2 [23] ;
short arr_8 [23] ;
unsigned long long int arr_11 [23] [23] [23] [23] [23] ;
signed char arr_15 [23] ;
unsigned int arr_16 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)24304;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-27915;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 7073940684296911835ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 792258891U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
