#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1121951815;
signed char var_1 = (signed char)115;
unsigned char var_2 = (unsigned char)118;
unsigned int var_4 = 3603763851U;
unsigned long long int var_5 = 6574592978542105568ULL;
unsigned long long int var_6 = 2359256983352069683ULL;
unsigned long long int var_7 = 11753729718125370852ULL;
long long int var_8 = -1244990883142536529LL;
short var_9 = (short)6306;
unsigned long long int var_10 = 16107934262753828926ULL;
int zero = 0;
unsigned int var_13 = 1097774890U;
short var_14 = (short)5376;
unsigned short var_15 = (unsigned short)62623;
unsigned int var_16 = 2593864367U;
unsigned char var_17 = (unsigned char)110;
unsigned char var_18 = (unsigned char)252;
signed char var_19 = (signed char)-104;
unsigned char arr_0 [16] [16] ;
signed char arr_1 [16] [16] ;
unsigned char arr_4 [16] ;
short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)245 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-32131 : (short)-4112;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
