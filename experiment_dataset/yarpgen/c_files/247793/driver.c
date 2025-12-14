#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-23522;
unsigned long long int var_8 = 16392469694792586419ULL;
unsigned short var_13 = (unsigned short)41253;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-115;
_Bool var_16 = (_Bool)1;
long long int var_18 = -3028675372310870830LL;
int zero = 0;
unsigned int var_19 = 1258127318U;
unsigned long long int var_20 = 7286234438125692895ULL;
unsigned short var_21 = (unsigned short)55364;
unsigned short arr_1 [13] [13] ;
long long int arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10377;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -1256514920733758242LL;
}

void checksum() {
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
