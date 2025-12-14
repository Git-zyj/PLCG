#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9160390423993490222LL;
unsigned char var_1 = (unsigned char)72;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)255;
signed char var_5 = (signed char)-62;
signed char var_7 = (signed char)60;
unsigned char var_8 = (unsigned char)29;
int var_11 = 1657140755;
signed char var_13 = (signed char)59;
long long int var_15 = -6943827894928268719LL;
int zero = 0;
short var_16 = (short)-3872;
unsigned char var_17 = (unsigned char)74;
short var_18 = (short)17963;
short arr_0 [15] [15] ;
signed char arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-2934 : (short)13672;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)72;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
