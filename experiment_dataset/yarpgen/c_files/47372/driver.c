#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
signed char var_2 = (signed char)-79;
unsigned long long int var_5 = 12981247566332791804ULL;
signed char var_6 = (signed char)-30;
long long int var_8 = -3964349598403462618LL;
signed char var_11 = (signed char)35;
long long int var_15 = -3802871888594358221LL;
unsigned long long int var_17 = 4456846748822655401ULL;
int zero = 0;
long long int var_19 = -1319083305650215854LL;
short var_20 = (short)-9267;
long long int arr_3 [17] [17] ;
unsigned int arr_4 [17] ;
unsigned long long int arr_5 [17] ;
unsigned short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3472833010895745511LL : -2740023387132729638LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3305991808U : 834718632U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 13489011033950025456ULL : 7061752387375190877ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)63157 : (unsigned short)51471;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
