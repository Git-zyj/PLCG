#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -841771127;
unsigned short var_3 = (unsigned short)24684;
signed char var_7 = (signed char)-63;
int var_8 = 666351210;
unsigned short var_10 = (unsigned short)12550;
int var_15 = 411408160;
int zero = 0;
unsigned long long int var_16 = 17995534952678447015ULL;
unsigned short var_17 = (unsigned short)37743;
short var_18 = (short)-3511;
signed char var_19 = (signed char)25;
unsigned char arr_4 [13] [13] [13] ;
unsigned short arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)19 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)8482;
}

void checksum() {
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
