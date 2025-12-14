#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18090;
int var_4 = 1836349497;
short var_6 = (short)14327;
int var_9 = -844899928;
unsigned char var_10 = (unsigned char)153;
unsigned char var_11 = (unsigned char)243;
unsigned int var_12 = 3708935710U;
unsigned long long int var_14 = 2180830963502269775ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-31445;
short var_17 = (short)3412;
unsigned char var_18 = (unsigned char)192;
unsigned long long int var_19 = 199847749059070998ULL;
long long int var_20 = 6616946079985727763LL;
unsigned int var_21 = 4227981199U;
signed char arr_0 [12] ;
_Bool arr_4 [16] ;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1396407377;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
