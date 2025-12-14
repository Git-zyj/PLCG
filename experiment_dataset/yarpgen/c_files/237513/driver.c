#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14836;
unsigned short var_2 = (unsigned short)31996;
long long int var_3 = 6584957661128821713LL;
unsigned char var_7 = (unsigned char)24;
int var_8 = -1384850860;
unsigned short var_9 = (unsigned short)63072;
unsigned short var_11 = (unsigned short)29222;
short var_12 = (short)-12617;
unsigned long long int var_15 = 10320058920950523143ULL;
int zero = 0;
short var_16 = (short)2023;
unsigned short var_17 = (unsigned short)16120;
long long int var_18 = -5292758583789615156LL;
int var_19 = 1087091386;
long long int var_20 = 4166533050258381644LL;
short arr_1 [25] ;
unsigned char arr_3 [25] [25] [25] ;
short arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-28476;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-17431;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
