#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10945685923079143535ULL;
unsigned int var_1 = 1250554202U;
unsigned long long int var_2 = 17746935079130639615ULL;
short var_3 = (short)22444;
int var_4 = 1352162560;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)47647;
unsigned short var_7 = (unsigned short)33613;
short var_8 = (short)15923;
_Bool var_9 = (_Bool)0;
int var_10 = -1630022504;
unsigned short var_11 = (unsigned short)36459;
long long int var_12 = 2353370181398640807LL;
unsigned int var_13 = 152289919U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)17251;
unsigned long long int var_16 = 16915040121251113305ULL;
int zero = 0;
unsigned long long int var_17 = 7725753503947246180ULL;
unsigned long long int var_18 = 6279397342184166668ULL;
unsigned int var_19 = 2326579675U;
unsigned long long int var_20 = 896318228432116379ULL;
unsigned short var_21 = (unsigned short)27387;
unsigned long long int var_22 = 1616451256526385155ULL;
unsigned short arr_9 [25] [25] [25] ;
unsigned short arr_16 [25] [25] [25] [25] [25] ;
int arr_17 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)26382 : (unsigned short)61239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)64819 : (unsigned short)12471;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? -1066790557 : 109517338;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
