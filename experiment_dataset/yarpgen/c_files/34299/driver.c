#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1038033173;
unsigned char var_1 = (unsigned char)186;
int var_2 = -1133635505;
unsigned char var_3 = (unsigned char)113;
unsigned long long int var_4 = 5176421881635193936ULL;
unsigned int var_5 = 3954464709U;
signed char var_6 = (signed char)-121;
signed char var_7 = (signed char)-67;
signed char var_8 = (signed char)10;
unsigned short var_9 = (unsigned short)58061;
int var_10 = -1228860021;
int zero = 0;
short var_11 = (short)6444;
signed char var_12 = (signed char)0;
long long int var_13 = -8074718137547402713LL;
unsigned int var_14 = 2452523020U;
long long int var_15 = 7325265631199003500LL;
int var_16 = 528164077;
unsigned int var_17 = 664988126U;
unsigned short var_18 = (unsigned short)12449;
unsigned char arr_13 [16] [16] [16] ;
signed char arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)238 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)83 : (signed char)-125;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
