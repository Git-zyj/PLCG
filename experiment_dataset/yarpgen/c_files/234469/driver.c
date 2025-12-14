#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 4244096926U;
long long int var_6 = 1864166114921654731LL;
unsigned long long int var_7 = 7901406640458628341ULL;
int var_8 = -1297434143;
unsigned int var_9 = 1314059878U;
short var_10 = (short)91;
signed char var_11 = (signed char)-37;
unsigned int var_12 = 244730073U;
long long int var_14 = 6271288698071292615LL;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
long long int var_17 = -8169626872003461080LL;
int var_18 = 2143397496;
signed char var_19 = (signed char)30;
unsigned int var_20 = 3533006892U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)50;
int var_23 = -315260630;
signed char var_24 = (signed char)120;
short var_25 = (short)-22713;
_Bool var_26 = (_Bool)0;
unsigned char arr_17 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)192 : (unsigned char)151;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
