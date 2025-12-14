#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17979;
unsigned short var_4 = (unsigned short)52145;
unsigned char var_5 = (unsigned char)85;
int var_6 = 729294598;
unsigned short var_7 = (unsigned short)3484;
unsigned char var_9 = (unsigned char)236;
int zero = 0;
unsigned int var_14 = 2291635626U;
unsigned char var_15 = (unsigned char)157;
int var_16 = -271589541;
unsigned int var_17 = 2451424354U;
int var_18 = 1351384035;
short arr_0 [11] ;
short arr_1 [11] ;
unsigned int arr_2 [11] ;
signed char arr_4 [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)7369;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-4400;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1844248428U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 7933975958206986961ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
