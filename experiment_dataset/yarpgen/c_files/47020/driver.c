#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)231;
unsigned short var_7 = (unsigned short)52827;
unsigned short var_9 = (unsigned short)56478;
unsigned char var_10 = (unsigned char)158;
unsigned short var_11 = (unsigned short)21202;
int zero = 0;
unsigned short var_12 = (unsigned short)39256;
unsigned short var_13 = (unsigned short)19643;
int var_14 = 160015175;
unsigned char var_15 = (unsigned char)49;
unsigned char var_16 = (unsigned char)211;
unsigned short var_17 = (unsigned short)18600;
unsigned short arr_1 [21] ;
unsigned char arr_3 [21] [21] [21] ;
int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)61960;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1382814887;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
