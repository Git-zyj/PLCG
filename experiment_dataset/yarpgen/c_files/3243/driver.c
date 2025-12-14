#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7539;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)23;
unsigned char var_4 = (unsigned char)167;
unsigned short var_5 = (unsigned short)46822;
short var_6 = (short)1036;
signed char var_9 = (signed char)-29;
signed char var_10 = (signed char)1;
long long int var_11 = 8678175509048175056LL;
long long int var_12 = -2448346014349820775LL;
int zero = 0;
signed char var_15 = (signed char)64;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22192;
long long int var_18 = 8312154183573813426LL;
unsigned char var_19 = (unsigned char)162;
unsigned char var_20 = (unsigned char)61;
signed char var_21 = (signed char)-63;
signed char var_22 = (signed char)48;
short var_23 = (short)-22752;
unsigned int var_24 = 2412643372U;
_Bool arr_0 [20] ;
short arr_3 [20] [20] [20] ;
unsigned int arr_4 [20] [20] [20] [20] ;
unsigned int arr_6 [20] [20] [20] ;
long long int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)11574;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1908734202U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3276364838U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -922051590129704264LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
