#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 196858791U;
int var_1 = 507964950;
signed char var_4 = (signed char)81;
short var_6 = (short)-2383;
unsigned int var_8 = 3770449816U;
int var_11 = -1855810817;
unsigned int var_12 = 4060523270U;
int var_14 = -91507279;
unsigned int var_15 = 3823963115U;
int zero = 0;
unsigned short var_16 = (unsigned short)41853;
unsigned short var_17 = (unsigned short)46377;
signed char var_18 = (signed char)113;
unsigned char var_19 = (unsigned char)121;
int var_20 = -221831607;
unsigned char var_21 = (unsigned char)18;
int var_22 = -2074736057;
int var_23 = 773801518;
signed char arr_5 [14] ;
signed char arr_6 [14] [14] ;
int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1178363025 : 1314569825;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
