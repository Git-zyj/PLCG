#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10654162689209512385ULL;
unsigned short var_3 = (unsigned short)45532;
unsigned char var_5 = (unsigned char)152;
unsigned short var_6 = (unsigned short)1763;
unsigned int var_7 = 2994431591U;
short var_8 = (short)-13316;
short var_10 = (short)28229;
int zero = 0;
short var_11 = (short)19869;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)27455;
unsigned short var_14 = (unsigned short)34147;
unsigned long long int var_15 = 2451092227597120994ULL;
unsigned char var_16 = (unsigned char)152;
long long int var_17 = -7590893167466488219LL;
short arr_4 [15] [15] ;
unsigned char arr_7 [17] [17] ;
short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26238;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)31667;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
