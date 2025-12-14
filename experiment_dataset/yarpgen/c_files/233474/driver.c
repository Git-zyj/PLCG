#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17470993721556443118ULL;
unsigned long long int var_8 = 2724819141929257663ULL;
signed char var_10 = (signed char)29;
short var_11 = (short)27389;
long long int var_14 = 6277675451605989627LL;
int zero = 0;
int var_15 = -1918903380;
unsigned short var_16 = (unsigned short)30639;
unsigned short var_17 = (unsigned short)41590;
short var_18 = (short)-25683;
signed char var_19 = (signed char)8;
unsigned char var_20 = (unsigned char)88;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)55034;
unsigned char var_23 = (unsigned char)206;
signed char arr_3 [20] ;
int arr_6 [22] ;
unsigned int arr_4 [20] [20] ;
short arr_5 [20] ;
int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1951784549 : -1541618171;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1536414985U : 1770220486U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)30156 : (short)19435;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -253070809 : 902813399;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
