#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned char var_1 = (unsigned char)78;
unsigned short var_2 = (unsigned short)26754;
unsigned char var_3 = (unsigned char)24;
unsigned short var_4 = (unsigned short)26695;
unsigned char var_5 = (unsigned char)151;
unsigned char var_6 = (unsigned char)224;
unsigned short var_7 = (unsigned short)21444;
unsigned char var_9 = (unsigned char)28;
unsigned char var_10 = (unsigned char)163;
unsigned char var_11 = (unsigned char)220;
unsigned char var_12 = (unsigned char)249;
unsigned char var_13 = (unsigned char)5;
unsigned char var_14 = (unsigned char)170;
unsigned char var_15 = (unsigned char)33;
unsigned char var_16 = (unsigned char)173;
unsigned short var_17 = (unsigned short)58516;
int zero = 0;
unsigned char var_18 = (unsigned char)91;
unsigned char var_19 = (unsigned char)188;
unsigned short var_20 = (unsigned short)59341;
unsigned short var_21 = (unsigned short)34661;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)3977 : (unsigned short)4943;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
