#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27118;
short var_3 = (short)-4714;
unsigned char var_4 = (unsigned char)20;
unsigned char var_6 = (unsigned char)1;
signed char var_7 = (signed char)-66;
int zero = 0;
short var_13 = (short)12545;
unsigned char var_14 = (unsigned char)228;
unsigned char var_15 = (unsigned char)112;
unsigned char var_16 = (unsigned char)102;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned int arr_2 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)53122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3476615314U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1919406672;
}

void checksum() {
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
