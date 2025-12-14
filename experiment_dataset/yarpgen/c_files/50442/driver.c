#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26642;
unsigned char var_3 = (unsigned char)182;
signed char var_4 = (signed char)-79;
long long int var_7 = -2365502982703776346LL;
int var_12 = 494517467;
signed char var_13 = (signed char)14;
int zero = 0;
unsigned short var_14 = (unsigned short)36664;
long long int var_15 = 985215139441477630LL;
unsigned char var_16 = (unsigned char)49;
int var_17 = -1859448391;
signed char arr_1 [12] ;
short arr_2 [12] ;
unsigned int arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)22428;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3825176472U : 1000169252U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
