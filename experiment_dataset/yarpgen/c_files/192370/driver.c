#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2835644979178152689LL;
signed char var_1 = (signed char)-77;
unsigned short var_2 = (unsigned short)9967;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-41;
long long int var_7 = -6464087396459340340LL;
unsigned char var_8 = (unsigned char)217;
int var_9 = 2008531257;
long long int var_11 = 4535569777192782651LL;
short var_13 = (short)17348;
signed char var_15 = (signed char)122;
int zero = 0;
short var_16 = (short)32269;
long long int var_17 = 6111586179463710729LL;
short var_18 = (short)-4088;
signed char var_19 = (signed char)-7;
unsigned short arr_0 [23] ;
short arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
int arr_4 [23] ;
long long int arr_5 [23] ;
unsigned int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)52752;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20626;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -301755730;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 839710862423579856LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1510381339U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
