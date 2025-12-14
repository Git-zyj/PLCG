#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49550;
unsigned char var_5 = (unsigned char)250;
unsigned short var_8 = (unsigned short)63590;
long long int var_13 = -6257937312972697166LL;
long long int var_14 = -2991741460896524749LL;
long long int var_16 = -2136597768036057209LL;
int zero = 0;
long long int var_17 = 6446910507472754127LL;
long long int var_18 = 8332391973008261650LL;
long long int var_19 = 4181255476919658768LL;
long long int var_20 = 377407199227886618LL;
long long int var_21 = 2029142312946122416LL;
unsigned short var_22 = (unsigned short)48768;
long long int var_23 = -4810054127561090703LL;
long long int var_24 = -8999200177307602390LL;
unsigned short var_25 = (unsigned short)8658;
long long int var_26 = 5796350682910011952LL;
long long int arr_10 [20] [20] ;
signed char arr_12 [20] [20] [20] [20] [20] [20] [20] ;
signed char arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 5142882977338290721LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (signed char)-63;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
