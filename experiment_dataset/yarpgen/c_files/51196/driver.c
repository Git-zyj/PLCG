#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14144;
unsigned int var_2 = 2066967748U;
short var_5 = (short)-3289;
_Bool var_6 = (_Bool)1;
int var_10 = -1270848784;
int var_12 = 2005207150;
unsigned short var_13 = (unsigned short)21187;
unsigned char var_14 = (unsigned char)70;
int var_16 = 1476585296;
unsigned short var_17 = (unsigned short)19651;
int zero = 0;
unsigned char var_20 = (unsigned char)26;
unsigned long long int var_21 = 11156298498446196187ULL;
unsigned char var_22 = (unsigned char)93;
unsigned int var_23 = 272675781U;
unsigned short var_24 = (unsigned short)3554;
unsigned char arr_3 [20] [20] [20] ;
int arr_4 [20] [20] [20] ;
int arr_5 [20] ;
unsigned short arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 745795605;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -409210206;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)44985;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
