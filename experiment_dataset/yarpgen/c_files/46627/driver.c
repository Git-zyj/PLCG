#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
short var_1 = (short)16780;
unsigned char var_2 = (unsigned char)18;
signed char var_3 = (signed char)-71;
unsigned char var_5 = (unsigned char)164;
short var_6 = (short)-24667;
unsigned char var_7 = (unsigned char)148;
unsigned char var_9 = (unsigned char)216;
unsigned int var_10 = 1773672044U;
int zero = 0;
unsigned short var_12 = (unsigned short)51794;
unsigned char var_13 = (unsigned char)92;
unsigned int arr_0 [16] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1225606631U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)19286 : (short)27763;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
