#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7069696136426903460ULL;
unsigned char var_1 = (unsigned char)16;
unsigned char var_2 = (unsigned char)120;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)233;
int var_5 = 1384314136;
unsigned long long int var_6 = 1925296223944320066ULL;
signed char var_7 = (signed char)-115;
unsigned char var_8 = (unsigned char)65;
signed char var_9 = (signed char)65;
short var_11 = (short)16871;
int zero = 0;
short var_15 = (short)-12970;
unsigned short var_16 = (unsigned short)49806;
unsigned short var_17 = (unsigned short)65091;
unsigned short var_18 = (unsigned short)35928;
signed char arr_7 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-12 : (signed char)-51;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
