#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4871;
unsigned long long int var_3 = 10789955469236727998ULL;
unsigned int var_4 = 1820682121U;
unsigned short var_6 = (unsigned short)36774;
signed char var_7 = (signed char)-90;
long long int var_8 = 8255126330097631309LL;
signed char var_10 = (signed char)-51;
int var_13 = 90141247;
unsigned short var_14 = (unsigned short)5080;
int zero = 0;
unsigned char var_15 = (unsigned char)26;
unsigned int var_16 = 3104103905U;
signed char arr_1 [15] ;
unsigned int arr_3 [15] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2297174207U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)119;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
