#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 2179796726U;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)8;
short var_12 = (short)-10274;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-13209;
short var_16 = (short)-19813;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-14436;
int var_19 = 721450125;
short var_20 = (short)-3079;
unsigned long long int arr_1 [21] ;
int arr_3 [21] [21] ;
short arr_4 [21] [21] [21] ;
short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7569247976897241530ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1073797663 : 391946118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)8238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-24196 : (short)27346;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
