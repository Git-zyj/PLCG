#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50285;
unsigned short var_4 = (unsigned short)44639;
unsigned short var_5 = (unsigned short)32968;
unsigned short var_6 = (unsigned short)17596;
unsigned short var_8 = (unsigned short)4479;
unsigned short var_10 = (unsigned short)45;
unsigned short var_11 = (unsigned short)25756;
unsigned short var_12 = (unsigned short)43997;
unsigned short var_15 = (unsigned short)9993;
unsigned short var_17 = (unsigned short)37901;
int zero = 0;
unsigned short var_20 = (unsigned short)912;
unsigned short var_21 = (unsigned short)35681;
unsigned short var_22 = (unsigned short)55203;
unsigned short var_23 = (unsigned short)23900;
unsigned short var_24 = (unsigned short)8554;
unsigned short arr_0 [13] ;
unsigned short arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)14189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)8874;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
