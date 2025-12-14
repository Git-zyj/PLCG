#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1643029394;
unsigned short var_1 = (unsigned short)16732;
unsigned int var_2 = 2105962088U;
unsigned short var_4 = (unsigned short)17921;
unsigned long long int var_5 = 5276830830856112865ULL;
unsigned short var_6 = (unsigned short)48293;
signed char var_7 = (signed char)5;
signed char var_8 = (signed char)5;
unsigned char var_9 = (unsigned char)18;
int var_10 = -1814135306;
int zero = 0;
unsigned short var_11 = (unsigned short)18912;
unsigned short var_12 = (unsigned short)51725;
long long int var_13 = -4315439981273650231LL;
long long int var_14 = -4703002980457507502LL;
unsigned short arr_4 [17] ;
unsigned int arr_5 [17] ;
unsigned char arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)27587;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2354359838U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
