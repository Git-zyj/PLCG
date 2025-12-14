#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1749086743;
unsigned long long int var_1 = 13561200195034660478ULL;
unsigned short var_3 = (unsigned short)58289;
unsigned int var_5 = 1648424082U;
unsigned long long int var_8 = 15940191012018495628ULL;
unsigned int var_10 = 1593357766U;
short var_12 = (short)-17397;
signed char var_14 = (signed char)-26;
int zero = 0;
short var_15 = (short)-14629;
long long int var_16 = 17917446963906872LL;
long long int var_17 = 6221652147283382491LL;
short var_18 = (short)-16042;
signed char var_19 = (signed char)-101;
long long int var_20 = 8511997071635610733LL;
short arr_1 [18] [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19631;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
