#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1393245668;
unsigned char var_6 = (unsigned char)216;
signed char var_8 = (signed char)102;
unsigned int var_12 = 337357520U;
unsigned short var_13 = (unsigned short)58101;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)28491;
signed char var_17 = (signed char)-45;
unsigned char var_18 = (unsigned char)120;
unsigned long long int var_19 = 8223825100449111082ULL;
short var_20 = (short)23931;
short var_21 = (short)-21963;
unsigned int arr_0 [16] [16] ;
signed char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 865744161U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)44 : (signed char)-112;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
