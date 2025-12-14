#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -747080175;
unsigned char var_6 = (unsigned char)15;
unsigned short var_13 = (unsigned short)14654;
unsigned long long int var_14 = 11677907613421725423ULL;
int zero = 0;
int var_15 = -2010377239;
unsigned long long int var_16 = 5507921809814552430ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)126;
short var_19 = (short)-4795;
unsigned char var_20 = (unsigned char)222;
unsigned long long int arr_0 [24] [24] ;
unsigned long long int arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 7743833783920712390ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4055130693455197190ULL : 7371908058242307911ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
