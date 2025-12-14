#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2532;
long long int var_2 = -7436641090241631810LL;
long long int var_3 = -4053722356891494076LL;
long long int var_4 = -4468731674546796647LL;
signed char var_5 = (signed char)75;
long long int var_6 = -9084375880702483236LL;
signed char var_7 = (signed char)72;
signed char var_8 = (signed char)4;
unsigned long long int var_9 = 6442727253699197396ULL;
short var_10 = (short)32361;
short var_11 = (short)19834;
unsigned int var_12 = 4449934U;
int zero = 0;
short var_13 = (short)14691;
long long int var_14 = 1561235459751829500LL;
signed char var_15 = (signed char)124;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)13;
signed char arr_2 [12] [12] [12] ;
long long int arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] ;
unsigned short arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1331688493989980640LL : 5662182661304283359LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2034210252U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)22662 : (unsigned short)4667;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
