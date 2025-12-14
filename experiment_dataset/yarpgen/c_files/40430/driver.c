#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
unsigned long long int var_6 = 13721894301440229018ULL;
unsigned int var_7 = 3580057323U;
unsigned char var_8 = (unsigned char)167;
int var_9 = -862303097;
unsigned int var_11 = 1533103893U;
int zero = 0;
short var_14 = (short)-31658;
unsigned short var_15 = (unsigned short)30920;
signed char var_16 = (signed char)48;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)172;
signed char var_19 = (signed char)-86;
unsigned short var_20 = (unsigned short)31336;
unsigned char var_21 = (unsigned char)158;
unsigned int var_22 = 1911789517U;
unsigned short var_23 = (unsigned short)13252;
unsigned char var_24 = (unsigned char)114;
unsigned char var_25 = (unsigned char)185;
int var_26 = 1430131135;
unsigned short arr_1 [25] [25] ;
signed char arr_2 [25] ;
unsigned short arr_4 [25] [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)39932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)46431;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)56643;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
