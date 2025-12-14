#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14617;
short var_1 = (short)4928;
short var_2 = (short)-9188;
unsigned long long int var_3 = 10966647332147868284ULL;
unsigned long long int var_4 = 16074394602270123396ULL;
int var_5 = 791502538;
long long int var_6 = -579045314453882377LL;
long long int var_8 = 132893126247924234LL;
unsigned long long int var_9 = 6017219003852177375ULL;
unsigned int var_10 = 1316556063U;
int zero = 0;
unsigned int var_12 = 1220493674U;
unsigned int var_13 = 3279997342U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3953464918U;
signed char var_16 = (signed char)-59;
unsigned long long int var_17 = 1755526518666854348ULL;
unsigned int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
unsigned int arr_4 [24] [24] ;
signed char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4077451053U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)30645;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 12399554992273040868ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 132120956U : 3805248766U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)29 : (signed char)110;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
