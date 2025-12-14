#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
long long int var_4 = 2952602749582295779LL;
unsigned short var_6 = (unsigned short)63971;
unsigned char var_7 = (unsigned char)67;
short var_10 = (short)5536;
unsigned long long int var_11 = 14364895138844980646ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)112;
int var_13 = 2071028261;
unsigned short var_14 = (unsigned short)35810;
unsigned char var_15 = (unsigned char)175;
unsigned short var_16 = (unsigned short)14276;
int arr_2 [24] ;
int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1385322983;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 776418628 : 790265027;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
