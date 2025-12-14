#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-19351;
short var_8 = (short)-25786;
short var_12 = (short)28328;
unsigned char var_14 = (unsigned char)187;
unsigned long long int var_15 = 11679330243256659162ULL;
int zero = 0;
unsigned long long int var_17 = 13370761250190758684ULL;
long long int var_18 = -2951948152989856573LL;
short var_19 = (short)9573;
long long int var_20 = 5230793697304045581LL;
signed char var_21 = (signed char)44;
unsigned long long int var_22 = 8910480493878763401ULL;
_Bool var_23 = (_Bool)1;
signed char arr_2 [25] [25] [25] ;
unsigned char arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)130;
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
