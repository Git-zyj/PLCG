#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2316769068U;
unsigned long long int var_11 = 18145879975022890545ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)227;
int var_18 = -872879071;
int zero = 0;
unsigned char var_19 = (unsigned char)144;
unsigned long long int var_20 = 6535825162056068178ULL;
short var_21 = (short)-59;
unsigned long long int var_22 = 4402034456414226592ULL;
unsigned char arr_5 [11] [11] [11] ;
short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-7633;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
