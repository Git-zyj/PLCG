#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43646;
unsigned long long int var_2 = 6819979350455101519ULL;
unsigned short var_5 = (unsigned short)44308;
int var_6 = -417605821;
unsigned char var_7 = (unsigned char)78;
long long int var_8 = -1697890846348339734LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3911814479194907576ULL;
unsigned long long int var_13 = 7543293300267756481ULL;
unsigned int var_14 = 2317862945U;
unsigned int var_15 = 2185891890U;
unsigned char var_16 = (unsigned char)50;
unsigned char var_17 = (unsigned char)199;
long long int var_18 = -5656041402691944472LL;
int zero = 0;
unsigned short var_19 = (unsigned short)58003;
signed char var_20 = (signed char)55;
unsigned short var_21 = (unsigned short)29299;
unsigned short var_22 = (unsigned short)33046;
int var_23 = 1715878556;
long long int var_24 = 3059159550686515564LL;
unsigned char arr_6 [20] [20] ;
unsigned short arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)46957;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
