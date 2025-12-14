#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 57251521U;
int var_1 = -1205564373;
unsigned char var_2 = (unsigned char)208;
short var_3 = (short)11596;
unsigned short var_4 = (unsigned short)14164;
unsigned long long int var_5 = 8012358889356960755ULL;
short var_6 = (short)31380;
unsigned short var_7 = (unsigned short)26206;
unsigned short var_8 = (unsigned short)39158;
short var_10 = (short)-13481;
signed char var_11 = (signed char)110;
int zero = 0;
int var_12 = -1754754827;
unsigned int var_13 = 33686870U;
unsigned int var_14 = 1092437134U;
unsigned int var_15 = 1373814796U;
signed char var_16 = (signed char)10;
unsigned short var_17 = (unsigned short)6589;
unsigned int arr_5 [11] [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1875976498U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)6936;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
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
