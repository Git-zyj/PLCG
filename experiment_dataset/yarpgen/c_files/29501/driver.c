#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)56;
short var_9 = (short)23359;
short var_11 = (short)6026;
int var_12 = 1598755737;
long long int var_13 = -1443259344420359422LL;
int zero = 0;
unsigned long long int var_14 = 12173371191437476063ULL;
unsigned short var_15 = (unsigned short)64311;
unsigned char var_16 = (unsigned char)169;
short var_17 = (short)-29162;
unsigned short var_18 = (unsigned short)3749;
signed char var_19 = (signed char)111;
short var_20 = (short)-22082;
long long int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
short arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned char arr_5 [23] ;
long long int arr_6 [23] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1102510354644238387LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 10510259348809436145ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)1737 : (short)-19043;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9469416417425004319ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 4419560336323816676LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2571727158U : 1912847966U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
