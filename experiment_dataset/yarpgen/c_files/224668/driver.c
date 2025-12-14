#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19432;
short var_5 = (short)25260;
unsigned int var_12 = 4218240100U;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)24917;
short var_19 = (short)13624;
short var_20 = (short)-21463;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)47;
unsigned long long int var_23 = 3221110527348668995ULL;
unsigned long long int var_24 = 4204901790864089429ULL;
signed char var_25 = (signed char)83;
long long int arr_2 [15] ;
int arr_4 [15] [15] [15] ;
unsigned char arr_12 [20] [20] ;
short arr_14 [16] ;
unsigned char arr_9 [15] ;
_Bool arr_10 [15] [15] ;
short arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1204630403015421561LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 497037641;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (short)907;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (short)-7464;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
