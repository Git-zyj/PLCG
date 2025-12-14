#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1586118970U;
int var_7 = -1458615783;
unsigned char var_13 = (unsigned char)164;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-30145;
unsigned short var_19 = (unsigned short)3420;
unsigned short var_20 = (unsigned short)63029;
unsigned int var_21 = 3565159540U;
unsigned long long int var_22 = 1588100756576114418ULL;
unsigned long long int var_23 = 6663533674420506614ULL;
unsigned int arr_5 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2583929625U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
