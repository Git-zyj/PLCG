#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1147241033;
unsigned char var_3 = (unsigned char)97;
unsigned long long int var_4 = 17851213689708035306ULL;
unsigned long long int var_5 = 3228274995759855719ULL;
unsigned short var_7 = (unsigned short)41335;
unsigned int var_9 = 3207616712U;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
unsigned short var_12 = (unsigned short)35804;
unsigned long long int var_13 = 11617643626067805768ULL;
unsigned long long int var_14 = 9196272885994444316ULL;
short var_15 = (short)-11535;
unsigned short arr_1 [20] ;
unsigned short arr_3 [20] ;
unsigned long long int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)22010;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)65110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 13200554099123355062ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
