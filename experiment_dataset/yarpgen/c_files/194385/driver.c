#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -718894708;
signed char var_1 = (signed char)-43;
unsigned long long int var_3 = 6408405660256732502ULL;
long long int var_9 = -7359109922002528132LL;
signed char var_12 = (signed char)63;
int zero = 0;
short var_13 = (short)190;
int var_14 = -478882465;
signed char var_15 = (signed char)-88;
signed char var_16 = (signed char)70;
unsigned int var_17 = 3512664114U;
unsigned char var_18 = (unsigned char)19;
unsigned short var_19 = (unsigned short)8390;
signed char var_20 = (signed char)8;
int arr_0 [22] ;
short arr_1 [22] ;
unsigned short arr_5 [19] [19] ;
unsigned char arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -119440064;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-4948;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)58043;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)222;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
