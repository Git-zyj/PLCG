#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2017404709;
unsigned char var_4 = (unsigned char)211;
unsigned char var_5 = (unsigned char)222;
long long int var_8 = 8661743765866772484LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)10;
unsigned int var_12 = 2060894389U;
int zero = 0;
unsigned char var_13 = (unsigned char)244;
short var_14 = (short)19606;
long long int var_15 = -3626562364626714346LL;
unsigned int var_16 = 3397936970U;
unsigned long long int var_17 = 13756280379189607427ULL;
long long int var_18 = -8770286856318079798LL;
short var_19 = (short)11557;
unsigned long long int var_20 = 12660766177739129613ULL;
unsigned char var_21 = (unsigned char)95;
int arr_5 [16] ;
unsigned char arr_10 [16] [16] [16] [16] ;
short arr_2 [17] ;
_Bool arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -95579170;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)21504;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
