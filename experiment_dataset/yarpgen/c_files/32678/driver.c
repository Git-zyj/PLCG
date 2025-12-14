#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18097;
unsigned int var_2 = 89415977U;
unsigned char var_11 = (unsigned char)166;
unsigned short var_12 = (unsigned short)39149;
unsigned char var_15 = (unsigned char)169;
int zero = 0;
unsigned int var_17 = 1118958986U;
short var_18 = (short)12766;
signed char var_19 = (signed char)122;
short var_20 = (short)-29818;
unsigned short var_21 = (unsigned short)57884;
long long int arr_0 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 5551819982548358271LL;
}

void checksum() {
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
