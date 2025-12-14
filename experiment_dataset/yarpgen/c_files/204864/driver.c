#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1272181531072308068LL;
unsigned long long int var_4 = 3519229289566566817ULL;
unsigned char var_7 = (unsigned char)212;
unsigned long long int var_8 = 18075100746711757081ULL;
signed char var_10 = (signed char)-61;
unsigned short var_13 = (unsigned short)14686;
int zero = 0;
signed char var_17 = (signed char)-68;
unsigned short var_18 = (unsigned short)58893;
short var_19 = (short)-16122;
unsigned long long int var_20 = 12059680926907467519ULL;
unsigned long long int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1620993330006619500ULL : 10513705775855909348ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
