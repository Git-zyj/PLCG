#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_1 = -384855757;
unsigned int var_3 = 1424818177U;
int var_5 = 940833381;
unsigned int var_9 = 3536458446U;
signed char var_14 = (signed char)-84;
unsigned short var_15 = (unsigned short)16361;
int zero = 0;
unsigned short var_16 = (unsigned short)14504;
signed char var_17 = (signed char)26;
signed char var_18 = (signed char)51;
_Bool var_19 = (_Bool)0;
int var_20 = 1378836460;
short var_21 = (short)-8149;
unsigned int arr_1 [19] ;
short arr_4 [19] ;
unsigned long long int arr_5 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 341715455U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)2033;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 15780856833218080761ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
