#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33556;
unsigned long long int var_1 = 14162172507103633621ULL;
unsigned long long int var_2 = 18277099181483128786ULL;
unsigned short var_3 = (unsigned short)51850;
int var_4 = 1778748382;
short var_5 = (short)-18010;
int var_6 = 497195624;
long long int var_7 = -4946079753775419187LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)122;
int var_12 = -1071240574;
int zero = 0;
long long int var_13 = -8458095781762348508LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)41927;
short var_16 = (short)-4411;
unsigned char var_17 = (unsigned char)79;
int var_18 = -1742583361;
int var_19 = 85972504;
long long int var_20 = -3726282993008576600LL;
short arr_0 [18] ;
unsigned char arr_1 [18] ;
_Bool arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-25244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)166;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
