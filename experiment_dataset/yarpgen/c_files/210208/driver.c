#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-6;
short var_4 = (short)-30291;
signed char var_5 = (signed char)25;
unsigned short var_7 = (unsigned short)29107;
unsigned long long int var_8 = 17882317727404065209ULL;
long long int var_11 = -4995344804063025559LL;
int zero = 0;
long long int var_12 = -5451531664656242323LL;
unsigned int var_13 = 2754044359U;
signed char var_14 = (signed char)16;
unsigned int var_15 = 2312219530U;
unsigned long long int var_16 = 1589881662810263441ULL;
short var_17 = (short)29966;
long long int arr_0 [23] ;
int arr_1 [23] ;
short arr_2 [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 8004602607438682876LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1902366749;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)11855;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)160;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
