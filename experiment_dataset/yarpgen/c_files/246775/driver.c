#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2236845914U;
long long int var_2 = 3976332043777945220LL;
unsigned int var_3 = 1110995946U;
long long int var_4 = -262850683839325306LL;
short var_5 = (short)25439;
unsigned int var_6 = 2247113628U;
long long int var_8 = -8523212637669957383LL;
long long int var_11 = 6145570943810262499LL;
unsigned int var_12 = 4243207788U;
unsigned int var_13 = 1818283382U;
long long int var_14 = 1802121910021565624LL;
long long int var_17 = -4452054170816370895LL;
int zero = 0;
short var_19 = (short)23276;
unsigned long long int var_20 = 9027285850754763302ULL;
unsigned long long int var_21 = 9893988332126520985ULL;
long long int var_22 = -5663428081799023066LL;
unsigned int var_23 = 494131268U;
unsigned long long int var_24 = 11278131395053382266ULL;
unsigned long long int var_25 = 2122372511485317708ULL;
long long int var_26 = 592200877550113167LL;
short var_27 = (short)31590;
unsigned long long int var_28 = 2357790527997529206ULL;
unsigned long long int var_29 = 14999479894667311416ULL;
unsigned long long int arr_1 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned int arr_5 [16] [16] [16] [16] ;
long long int arr_6 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 15156318782830596590ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 15416316289263720711ULL : 10161209786673272334ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4194736502U : 590660155U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -3826222440327401087LL;
}

void checksum() {
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
