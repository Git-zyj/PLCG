#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7297297187190731690LL;
short var_3 = (short)-2123;
unsigned long long int var_5 = 15065036687989138085ULL;
long long int var_10 = -3941657037955032554LL;
unsigned long long int var_17 = 9167228608373815828ULL;
int zero = 0;
unsigned long long int var_20 = 286339345609527505ULL;
signed char var_21 = (signed char)-28;
unsigned char var_22 = (unsigned char)241;
short arr_3 [16] ;
short arr_5 [16] [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)22023;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-107;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
