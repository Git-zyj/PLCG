#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8286147294129805866LL;
short var_2 = (short)-30027;
short var_4 = (short)-32011;
unsigned long long int var_6 = 1271347391321212647ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14834165849107587873ULL;
unsigned long long int var_12 = 10322954964481325201ULL;
int var_13 = 389880186;
long long int var_14 = -3786084637865378584LL;
int zero = 0;
short var_15 = (short)19907;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-32234;
unsigned short var_18 = (unsigned short)30763;
short var_19 = (short)20223;
short var_20 = (short)8883;
signed char var_21 = (signed char)29;
signed char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] [11] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 12675481947281278826ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 7141188012983007236LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
