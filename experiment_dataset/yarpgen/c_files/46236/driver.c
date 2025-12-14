#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned short var_2 = (unsigned short)34695;
unsigned short var_4 = (unsigned short)23414;
int var_7 = -29461682;
int var_8 = -2043595394;
signed char var_16 = (signed char)48;
int zero = 0;
short var_17 = (short)13721;
int var_18 = -1038098328;
unsigned int var_19 = 4183774052U;
unsigned char var_20 = (unsigned char)106;
short var_21 = (short)-21268;
unsigned long long int arr_0 [16] ;
unsigned int arr_5 [16] [16] [16] ;
unsigned char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 12232699657456147169ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2010716765U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)126 : (unsigned char)173;
}

void checksum() {
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
