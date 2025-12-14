#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
long long int var_1 = 3721651712407236136LL;
signed char var_2 = (signed char)91;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)49901;
short var_5 = (short)-19186;
short var_6 = (short)-20107;
long long int var_7 = -8905505653418624241LL;
long long int var_8 = 7112662892156222148LL;
signed char var_9 = (signed char)-57;
int zero = 0;
int var_10 = -1197881902;
long long int var_11 = 4831910413286445127LL;
unsigned long long int var_12 = 7608418540512487391ULL;
unsigned long long int var_13 = 12767037911224839258ULL;
int var_14 = 650343648;
unsigned int var_15 = 1992028985U;
short var_16 = (short)-405;
unsigned int arr_2 [24] [24] ;
_Bool arr_6 [24] [24] [24] ;
signed char arr_7 [24] [24] [24] ;
signed char arr_8 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1256185547U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
