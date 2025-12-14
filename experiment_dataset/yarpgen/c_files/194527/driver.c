#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9985084099756515086ULL;
short var_3 = (short)7247;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-22564;
short var_6 = (short)-8207;
short var_7 = (short)20731;
unsigned short var_8 = (unsigned short)38669;
unsigned long long int var_9 = 13453372859601636886ULL;
unsigned int var_10 = 1799798743U;
unsigned short var_12 = (unsigned short)54106;
unsigned int var_13 = 1805795283U;
short var_14 = (short)-30233;
int zero = 0;
short var_17 = (short)-28266;
short var_18 = (short)-19740;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1616491202U;
int var_21 = -1408039498;
_Bool var_22 = (_Bool)1;
unsigned int arr_0 [14] [14] ;
int arr_2 [14] [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3488826867U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1323119129;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -878536605;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
