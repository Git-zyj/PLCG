#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9684;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)185;
unsigned int var_7 = 776674481U;
unsigned int var_8 = 2069227901U;
short var_10 = (short)-11676;
int var_11 = -1478096020;
unsigned long long int var_12 = 11358471065307167561ULL;
unsigned long long int var_13 = 16843146657902679163ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)79;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2967484700U;
unsigned long long int var_17 = 7205946335089242796ULL;
short var_18 = (short)1521;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 12707082025439915075ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 15194817848803813642ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
