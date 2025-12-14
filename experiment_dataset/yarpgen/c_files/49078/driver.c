#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
int var_5 = 304460536;
long long int var_6 = -7436624184587437480LL;
int var_8 = 1107804453;
int zero = 0;
short var_11 = (short)-5859;
int var_12 = 1264458296;
unsigned int var_13 = 680493663U;
int var_14 = 573994239;
int var_15 = 1441067366;
short var_16 = (short)-16100;
unsigned short var_17 = (unsigned short)22061;
signed char var_18 = (signed char)-47;
short var_19 = (short)2894;
unsigned short arr_0 [15] ;
unsigned short arr_2 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)52081;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)37247;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
