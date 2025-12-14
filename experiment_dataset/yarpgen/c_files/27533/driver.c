#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63950;
unsigned int var_5 = 715323885U;
unsigned int var_14 = 2903644387U;
int zero = 0;
signed char var_17 = (signed char)-68;
short var_18 = (short)-28931;
unsigned long long int var_19 = 7725904059806153653ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2605242857U;
short var_22 = (short)-7232;
unsigned short var_23 = (unsigned short)23434;
unsigned char arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)14;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
