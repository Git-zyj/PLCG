#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned short var_4 = (unsigned short)15646;
unsigned short var_6 = (unsigned short)33099;
unsigned short var_9 = (unsigned short)1216;
unsigned short var_14 = (unsigned short)63927;
unsigned short var_16 = (unsigned short)39989;
int zero = 0;
unsigned char var_18 = (unsigned char)193;
unsigned char var_19 = (unsigned char)116;
unsigned short var_20 = (unsigned short)4388;
unsigned char var_21 = (unsigned char)137;
unsigned short var_22 = (unsigned short)10279;
unsigned short var_23 = (unsigned short)36235;
unsigned short var_24 = (unsigned short)41317;
unsigned char var_25 = (unsigned char)210;
unsigned short arr_3 [13] [13] ;
unsigned char arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)37508;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)55;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
