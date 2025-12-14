#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned int var_2 = 495321264U;
short var_4 = (short)-7552;
unsigned char var_5 = (unsigned char)138;
unsigned int var_6 = 378563845U;
unsigned char var_8 = (unsigned char)141;
unsigned long long int var_10 = 905982131858411050ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)247;
unsigned char var_13 = (unsigned char)194;
signed char var_14 = (signed char)-112;
unsigned short var_15 = (unsigned short)23551;
unsigned short var_16 = (unsigned short)4438;
unsigned long long int arr_0 [12] ;
signed char arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
signed char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3628749534097577640ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)39 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
