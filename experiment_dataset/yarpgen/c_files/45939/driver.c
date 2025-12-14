#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2291084546U;
unsigned int var_2 = 3383640890U;
unsigned short var_3 = (unsigned short)1727;
int var_4 = -370661051;
short var_5 = (short)-23681;
unsigned long long int var_6 = 12776987751195235246ULL;
short var_7 = (short)-4137;
long long int var_11 = -3563159499057257375LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)27406;
int var_14 = 228656408;
short var_15 = (short)30087;
short var_16 = (short)-1548;
int arr_10 [23] ;
long long int arr_11 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1664164577;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -2677134150968500526LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
