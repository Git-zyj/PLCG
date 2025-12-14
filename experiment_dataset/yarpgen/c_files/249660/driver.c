#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22255;
long long int var_11 = 935413866811448981LL;
signed char var_12 = (signed char)68;
unsigned int var_13 = 1992291997U;
signed char var_15 = (signed char)0;
int zero = 0;
unsigned int var_16 = 315096685U;
unsigned long long int var_17 = 6627604896056650122ULL;
short var_18 = (short)10133;
unsigned char arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)13;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
