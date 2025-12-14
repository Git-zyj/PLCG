#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7573;
signed char var_6 = (signed char)-43;
unsigned int var_8 = 4156122904U;
unsigned int var_9 = 3069454338U;
unsigned int var_10 = 2616921455U;
unsigned char var_11 = (unsigned char)11;
signed char var_12 = (signed char)64;
int zero = 0;
short var_13 = (short)-32492;
short var_14 = (short)-5992;
signed char var_15 = (signed char)-93;
unsigned int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 2725492401U : 926723732U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
