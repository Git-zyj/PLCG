#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17867;
unsigned int var_2 = 1011216790U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-30982;
signed char var_12 = (signed char)24;
unsigned long long int var_14 = 10989155641686909195ULL;
long long int var_15 = 1535484408689251688LL;
int zero = 0;
int var_16 = -893610917;
unsigned int var_17 = 4034498227U;
int var_18 = -191935348;
long long int var_19 = -5446690588247820371LL;
unsigned char var_20 = (unsigned char)200;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
signed char arr_2 [25] [25] ;
_Bool arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 17174496881189844265ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -422212009;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
