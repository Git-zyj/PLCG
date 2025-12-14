#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)56;
signed char var_7 = (signed char)-60;
unsigned int var_9 = 143453362U;
unsigned int var_14 = 1913372443U;
signed char var_16 = (signed char)51;
int var_17 = 1583755079;
int zero = 0;
unsigned long long int var_19 = 8505606872013796860ULL;
unsigned char var_20 = (unsigned char)0;
unsigned short var_21 = (unsigned short)46665;
short var_22 = (short)-29847;
unsigned long long int arr_0 [14] ;
unsigned short arr_2 [14] [14] [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 17015973462964593136ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)20004;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -2022709680;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
