#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1722390470;
int var_5 = -1686770935;
unsigned long long int var_6 = 6991297417632396502ULL;
long long int var_8 = 7050740964169456614LL;
signed char var_9 = (signed char)60;
int var_10 = -1196082375;
long long int var_11 = -6719307325881911946LL;
int zero = 0;
long long int var_12 = -5057755240828848899LL;
unsigned char var_13 = (unsigned char)134;
unsigned char var_14 = (unsigned char)224;
unsigned short var_15 = (unsigned short)45544;
signed char var_16 = (signed char)25;
unsigned short var_17 = (unsigned short)48676;
unsigned char var_18 = (unsigned char)18;
unsigned short var_19 = (unsigned short)38745;
unsigned short var_20 = (unsigned short)23603;
short var_21 = (short)3906;
short var_22 = (short)18732;
signed char var_23 = (signed char)87;
int var_24 = 1398721151;
int arr_1 [20] ;
unsigned int arr_3 [20] ;
signed char arr_4 [20] ;
unsigned int arr_10 [20] [20] [20] ;
signed char arr_12 [20] [20] [20] [20] [20] ;
unsigned char arr_13 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1580206207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2121942585U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 139261790U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
