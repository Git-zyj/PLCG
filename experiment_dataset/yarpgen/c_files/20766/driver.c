#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1290843041U;
short var_1 = (short)-4887;
unsigned char var_2 = (unsigned char)239;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6449729306034174389LL;
int var_11 = 105708422;
short var_12 = (short)-22236;
short var_14 = (short)31137;
int var_15 = 971266418;
int zero = 0;
int var_16 = 363133824;
short var_17 = (short)-25522;
signed char var_18 = (signed char)-103;
unsigned char var_19 = (unsigned char)152;
short var_20 = (short)17931;
unsigned int var_21 = 2966281808U;
unsigned char arr_0 [19] ;
short arr_1 [19] [19] ;
int arr_2 [22] ;
short arr_3 [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)26436;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -704072734;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)16042;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)12333;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
