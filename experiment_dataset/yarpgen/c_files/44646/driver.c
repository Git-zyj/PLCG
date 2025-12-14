#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6305932540960301554LL;
long long int var_5 = 1970941242106761102LL;
int var_6 = 2001435527;
_Bool var_7 = (_Bool)0;
long long int var_16 = -3948985367925583963LL;
int var_18 = -2078876601;
int zero = 0;
signed char var_20 = (signed char)79;
long long int var_21 = 672614400742941564LL;
short var_22 = (short)-2330;
int var_23 = -2124532060;
signed char var_24 = (signed char)-93;
unsigned long long int var_25 = 8680217141798113717ULL;
long long int arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
int arr_3 [12] ;
long long int arr_4 [12] ;
_Bool arr_7 [14] ;
int arr_5 [12] [12] ;
int arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 790310628243458443LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3196537440U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1163805143 : -1631669133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2626423121499711144LL : -2318437284438361989LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 583396173 : -654828253;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1039154558 : 1888233644;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
