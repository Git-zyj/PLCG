#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2576905310989478410LL;
unsigned short var_8 = (unsigned short)21310;
long long int var_11 = -3542837781336470493LL;
short var_15 = (short)13061;
int var_16 = -31584803;
int zero = 0;
signed char var_18 = (signed char)58;
signed char var_19 = (signed char)-96;
int var_20 = -906329281;
unsigned long long int var_21 = 2149558770877431616ULL;
short var_22 = (short)-2393;
int var_23 = 64791086;
int var_24 = -1041777977;
unsigned short var_25 = (unsigned short)9330;
short var_26 = (short)-21809;
int var_27 = -398460589;
long long int var_28 = -5881118711358051835LL;
unsigned short arr_0 [10] [10] ;
long long int arr_2 [10] [10] ;
long long int arr_3 [10] ;
unsigned int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)53286;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1351634022477762217LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -6874823941989165252LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3129367738U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
