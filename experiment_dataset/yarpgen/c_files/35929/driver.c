#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)25793;
unsigned short var_9 = (unsigned short)43478;
signed char var_11 = (signed char)-120;
unsigned char var_12 = (unsigned char)188;
unsigned long long int var_14 = 12048711004666350530ULL;
unsigned int var_17 = 3667313387U;
long long int var_18 = 3472747654825966800LL;
int zero = 0;
long long int var_19 = 1417903324967712599LL;
signed char var_20 = (signed char)95;
signed char var_21 = (signed char)116;
signed char var_22 = (signed char)117;
signed char var_23 = (signed char)5;
long long int var_24 = -8647553221841082866LL;
signed char arr_2 [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 9583998235819675034ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2843227608760732405ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 9332954082654331448ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
