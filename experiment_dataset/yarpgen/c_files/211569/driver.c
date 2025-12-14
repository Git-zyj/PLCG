#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15707961645497817371ULL;
long long int var_5 = 2595521244116688782LL;
unsigned long long int var_6 = 1957240266803464448ULL;
short var_7 = (short)29176;
int zero = 0;
unsigned int var_11 = 3685434188U;
unsigned short var_12 = (unsigned short)2173;
unsigned short var_13 = (unsigned short)3954;
unsigned char var_14 = (unsigned char)182;
unsigned int arr_0 [17] ;
int arr_1 [17] ;
unsigned short arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3386582787U : 504902357U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1589914361;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)46660;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
