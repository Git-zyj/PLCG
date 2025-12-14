#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7926684863502196838LL;
unsigned short var_1 = (unsigned short)8823;
unsigned short var_3 = (unsigned short)64717;
unsigned char var_6 = (unsigned char)156;
unsigned long long int var_8 = 14666212524090178055ULL;
unsigned int var_9 = 2341233552U;
unsigned short var_10 = (unsigned short)37783;
signed char var_12 = (signed char)-42;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
unsigned char var_14 = (unsigned char)149;
unsigned long long int var_15 = 13625778303210719852ULL;
short var_16 = (short)-4096;
unsigned short var_17 = (unsigned short)57230;
unsigned char var_18 = (unsigned char)114;
unsigned char arr_10 [11] [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (unsigned char)235 : (unsigned char)213;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
