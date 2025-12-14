#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)48;
int var_9 = -434328964;
unsigned char var_11 = (unsigned char)199;
unsigned short var_13 = (unsigned short)35370;
short var_15 = (short)-18782;
int zero = 0;
unsigned long long int var_16 = 14109186883828864631ULL;
unsigned char var_17 = (unsigned char)137;
short var_18 = (short)-19562;
unsigned char arr_1 [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3217433759U;
}

void checksum() {
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
