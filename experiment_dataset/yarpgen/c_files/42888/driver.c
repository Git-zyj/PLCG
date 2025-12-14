#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
long long int var_2 = 9110519387658903770LL;
unsigned int var_3 = 3445522372U;
unsigned int var_4 = 2091680277U;
unsigned long long int var_5 = 9352471330506347081ULL;
unsigned char var_7 = (unsigned char)95;
int var_12 = -1917120094;
unsigned int var_13 = 559611517U;
long long int var_15 = -8626331905301899779LL;
int zero = 0;
signed char var_16 = (signed char)-121;
long long int var_17 = 2429938340456530622LL;
unsigned int var_18 = 598822293U;
long long int var_19 = 910986804481047289LL;
unsigned int var_20 = 2217891308U;
long long int var_21 = 1654699069948901742LL;
long long int var_22 = 8873471396454989687LL;
short arr_2 [16] [16] [16] ;
unsigned char arr_4 [16] [16] [16] ;
unsigned long long int arr_5 [16] ;
short arr_12 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-22703;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 9130505176542273132ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-13064;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
