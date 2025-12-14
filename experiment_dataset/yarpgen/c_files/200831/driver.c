#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
int var_1 = 1323110451;
unsigned short var_3 = (unsigned short)41583;
unsigned short var_9 = (unsigned short)13075;
unsigned long long int var_10 = 5824829156082674177ULL;
int zero = 0;
unsigned int var_11 = 305151463U;
short var_12 = (short)30148;
unsigned int var_13 = 2428218299U;
int var_14 = 1877128533;
unsigned long long int var_15 = 14741205831568671835ULL;
unsigned char var_16 = (unsigned char)1;
unsigned char var_17 = (unsigned char)125;
signed char arr_2 [12] ;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 730296153U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
