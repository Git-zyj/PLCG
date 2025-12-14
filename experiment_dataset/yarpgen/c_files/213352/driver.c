#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8453313534117095348ULL;
int var_6 = -709921674;
int var_8 = 2009018717;
unsigned short var_12 = (unsigned short)63500;
int zero = 0;
long long int var_14 = 269869078212083503LL;
unsigned long long int var_15 = 7082294067518219035ULL;
long long int var_16 = -5244899537706244810LL;
signed char var_17 = (signed char)51;
unsigned int var_18 = 3111502203U;
int var_19 = -1081853241;
unsigned int arr_0 [21] ;
signed char arr_2 [21] ;
signed char arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2710259215U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
