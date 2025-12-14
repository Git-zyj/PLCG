#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)97;
unsigned char var_3 = (unsigned char)15;
unsigned short var_4 = (unsigned short)41888;
unsigned short var_5 = (unsigned short)37619;
short var_8 = (short)26926;
unsigned short var_9 = (unsigned short)44272;
unsigned int var_10 = 362281028U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 1240420634U;
int var_17 = -1800672976;
int zero = 0;
int var_18 = -171450798;
unsigned char var_19 = (unsigned char)29;
unsigned long long int var_20 = 4707410466877305230ULL;
short var_21 = (short)-7552;
signed char var_22 = (signed char)16;
int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 652237309;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
