#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned char var_1 = (unsigned char)202;
unsigned short var_2 = (unsigned short)59237;
int var_3 = 451923782;
unsigned long long int var_5 = 3639141167212082892ULL;
unsigned long long int var_7 = 8401295798232041313ULL;
unsigned short var_8 = (unsigned short)46900;
short var_9 = (short)-16703;
unsigned char var_10 = (unsigned char)27;
int zero = 0;
unsigned long long int var_13 = 551451920509973274ULL;
unsigned int var_14 = 884285185U;
unsigned int var_15 = 3009412209U;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)14701;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
