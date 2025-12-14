#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1783038970;
unsigned long long int var_2 = 11420903608630008488ULL;
unsigned long long int var_4 = 13844667603372748599ULL;
unsigned int var_5 = 3987029307U;
unsigned long long int var_8 = 2264128532318053744ULL;
int var_9 = -905894576;
unsigned int var_10 = 907660970U;
int zero = 0;
unsigned int var_12 = 3714798987U;
unsigned short var_13 = (unsigned short)3224;
int var_14 = -1187673230;
short var_15 = (short)-31901;
int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2142697796 : -737701591;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55592;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)220;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
