#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20688;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-11921;
_Bool var_10 = (_Bool)0;
signed char var_15 = (signed char)5;
int zero = 0;
unsigned short var_17 = (unsigned short)38815;
unsigned long long int var_18 = 15110203103504918554ULL;
short var_19 = (short)-26707;
unsigned char var_20 = (unsigned char)48;
unsigned short var_21 = (unsigned short)36756;
unsigned long long int var_22 = 7000740586465237407ULL;
unsigned char var_23 = (unsigned char)144;
_Bool arr_3 [16] [16] ;
unsigned int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 2901263252U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
