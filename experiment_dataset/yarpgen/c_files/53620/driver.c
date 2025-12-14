#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
short var_1 = (short)28169;
unsigned int var_2 = 2924128282U;
long long int var_3 = -941297403656710924LL;
unsigned short var_4 = (unsigned short)60386;
unsigned long long int var_7 = 11747971935437911795ULL;
short var_8 = (short)31359;
unsigned char var_10 = (unsigned char)89;
int zero = 0;
unsigned long long int var_11 = 8467295204070704593ULL;
short var_12 = (short)34;
short var_13 = (short)31285;
unsigned short var_14 = (unsigned short)52639;
unsigned long long int var_15 = 5599947016653886264ULL;
unsigned int var_16 = 2000401498U;
unsigned long long int arr_0 [23] ;
long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3100964668077316964ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -1985813065399854510LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)48601;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 7250486907602826292ULL : 8493052487568425423ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
