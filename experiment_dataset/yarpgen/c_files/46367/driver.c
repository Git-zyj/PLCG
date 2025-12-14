#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6596149923456990635LL;
long long int var_1 = 3167757932694828748LL;
unsigned long long int var_3 = 17403570067628338686ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 2007618273;
unsigned long long int var_7 = 17395982777837842560ULL;
unsigned long long int var_9 = 3263539115306706393ULL;
int zero = 0;
short var_10 = (short)14808;
long long int var_11 = -6163489684481198615LL;
unsigned short var_12 = (unsigned short)1235;
unsigned long long int var_13 = 16755053028959647032ULL;
long long int var_14 = 1885401599774205067LL;
long long int var_15 = -9028798844522731559LL;
signed char var_16 = (signed char)-17;
unsigned short arr_4 [13] ;
_Bool arr_8 [25] [25] ;
long long int arr_12 [19] [19] ;
unsigned char arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)65162;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 1554156795775079448LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
