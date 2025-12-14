#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30708;
unsigned int var_1 = 1397147130U;
short var_4 = (short)-20535;
long long int var_9 = 2840478236951196362LL;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)16846;
unsigned long long int var_15 = 14487992376804702609ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)14566;
int zero = 0;
signed char var_18 = (signed char)-86;
long long int var_19 = -2558745259830140395LL;
int var_20 = -376020800;
signed char var_21 = (signed char)-38;
unsigned long long int arr_0 [16] ;
int arr_2 [16] [16] ;
long long int arr_4 [16] [16] ;
long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7688383543330616012ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1630212233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 3977910994029630588LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 1580446051787008280LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
