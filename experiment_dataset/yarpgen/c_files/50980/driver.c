#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
signed char var_5 = (signed char)92;
int var_6 = 161285930;
unsigned int var_7 = 263569064U;
short var_8 = (short)19474;
short var_10 = (short)23807;
unsigned int var_11 = 1963487311U;
unsigned short var_12 = (unsigned short)36368;
int var_13 = -962254469;
unsigned short var_15 = (unsigned short)48929;
signed char var_17 = (signed char)4;
unsigned short var_18 = (unsigned short)12936;
int zero = 0;
long long int var_19 = -4848723211981933989LL;
unsigned long long int var_20 = 8147613162828354179ULL;
unsigned char var_21 = (unsigned char)166;
unsigned long long int var_22 = 9455463574834988237ULL;
short arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)13620;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1501460584U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9136;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
