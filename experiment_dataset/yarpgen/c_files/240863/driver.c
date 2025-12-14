#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
short var_7 = (short)12535;
signed char var_8 = (signed char)22;
int var_10 = 401523930;
unsigned long long int var_12 = 16580980248060531601ULL;
int zero = 0;
unsigned int var_13 = 2080418158U;
unsigned long long int var_14 = 14931754595494482500ULL;
short var_15 = (short)-30431;
unsigned int var_16 = 2434999434U;
unsigned char var_17 = (unsigned char)76;
long long int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2908973565695252339LL : 2985007852577686028LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2961 : (unsigned short)42339;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
