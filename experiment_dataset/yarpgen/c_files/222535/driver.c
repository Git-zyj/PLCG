#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned int var_1 = 1217935299U;
signed char var_2 = (signed char)7;
unsigned long long int var_3 = 2571527190461227041ULL;
signed char var_4 = (signed char)-95;
unsigned short var_7 = (unsigned short)34933;
unsigned int var_8 = 2240641479U;
unsigned short var_9 = (unsigned short)20284;
unsigned int var_12 = 482529588U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)13;
unsigned short var_16 = (unsigned short)30078;
unsigned char var_17 = (unsigned char)243;
int zero = 0;
unsigned char var_18 = (unsigned char)58;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3210101187U;
unsigned char var_21 = (unsigned char)246;
unsigned short var_22 = (unsigned short)32573;
short var_23 = (short)23892;
short var_24 = (short)-15690;
unsigned char var_25 = (unsigned char)24;
signed char arr_11 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-45;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
