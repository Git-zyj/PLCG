#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14074432345015342643ULL;
unsigned long long int var_6 = 2248783794171063906ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -1287918868;
short var_10 = (short)-17051;
_Bool var_11 = (_Bool)1;
int var_12 = -1157939587;
int zero = 0;
long long int var_13 = 5566945534503362704LL;
short var_14 = (short)-4861;
unsigned short var_15 = (unsigned short)23077;
unsigned short var_16 = (unsigned short)27728;
short var_17 = (short)14572;
int var_18 = -1745687289;
signed char var_19 = (signed char)36;
int var_20 = -1766179237;
unsigned short var_21 = (unsigned short)22372;
long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] ;
unsigned int arr_3 [24] [24] ;
unsigned int arr_10 [24] [24] ;
short arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8718528120266968116LL : 6289499413377684695LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3007086386696683868ULL : 7385626404028115374ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 597209664U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1626251412U : 1211994313U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)10994 : (short)-31412;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
