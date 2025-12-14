#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37688;
unsigned short var_1 = (unsigned short)16221;
unsigned char var_3 = (unsigned char)240;
signed char var_4 = (signed char)13;
unsigned long long int var_5 = 11827082299669295521ULL;
int var_8 = 686012393;
unsigned short var_11 = (unsigned short)21981;
unsigned short var_12 = (unsigned short)53983;
int zero = 0;
int var_14 = -2026746228;
unsigned short var_15 = (unsigned short)9748;
unsigned short var_16 = (unsigned short)29816;
signed char var_17 = (signed char)5;
short var_18 = (short)21061;
unsigned long long int arr_11 [13] [13] ;
short arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 4784077078918331370ULL : 9480114828112577859ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)9012 : (short)29071;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
