#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9611;
unsigned short var_3 = (unsigned short)3412;
unsigned short var_4 = (unsigned short)19769;
short var_5 = (short)-12152;
unsigned char var_6 = (unsigned char)196;
long long int var_8 = 7211237777834293853LL;
unsigned char var_10 = (unsigned char)236;
unsigned long long int var_11 = 2888082677172462478ULL;
int zero = 0;
unsigned long long int var_12 = 13461642532978753630ULL;
signed char var_13 = (signed char)121;
unsigned int var_14 = 1722525331U;
long long int var_15 = -4477930265320024242LL;
int var_16 = -951418868;
long long int var_17 = 8724756871503936563LL;
unsigned long long int var_18 = 10778478879889366945ULL;
short arr_12 [11] [11] ;
signed char arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-18660 : (short)17210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
