#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
unsigned int var_2 = 1721166168U;
unsigned short var_4 = (unsigned short)13790;
unsigned int var_5 = 2271980980U;
int var_7 = 829024946;
unsigned short var_11 = (unsigned short)62288;
unsigned long long int var_12 = 9484959801397160114ULL;
short var_14 = (short)27423;
unsigned char var_17 = (unsigned char)202;
short var_18 = (short)-7682;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
unsigned int var_20 = 1498042776U;
int var_21 = -18430124;
long long int var_22 = 1721275198359565254LL;
long long int arr_1 [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4201491470949478232LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
