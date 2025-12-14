#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6679237732838304263LL;
signed char var_2 = (signed char)15;
unsigned char var_6 = (unsigned char)132;
unsigned short var_7 = (unsigned short)48226;
unsigned char var_8 = (unsigned char)158;
int zero = 0;
long long int var_16 = 1113601927294617861LL;
unsigned int var_17 = 282608700U;
unsigned char var_18 = (unsigned char)205;
signed char var_19 = (signed char)-36;
unsigned short var_20 = (unsigned short)37153;
long long int var_21 = -5611982107302390812LL;
unsigned long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned short arr_3 [16] [16] [16] ;
signed char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2163920862343055955ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)62712;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-89;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
