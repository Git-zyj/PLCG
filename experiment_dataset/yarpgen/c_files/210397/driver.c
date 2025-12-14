#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -979029749;
long long int var_1 = 4010710476965451215LL;
short var_4 = (short)-28022;
int var_8 = -862172271;
short var_9 = (short)-31460;
unsigned short var_10 = (unsigned short)56949;
long long int var_11 = -3578725204752169786LL;
short var_13 = (short)-11089;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
short var_16 = (short)21750;
unsigned long long int var_17 = 4267728651046624012ULL;
int var_18 = 1736357097;
int var_19 = 632592825;
long long int arr_0 [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 5394770642937200374LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)218;
}

void checksum() {
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
