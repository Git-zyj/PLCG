#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
int var_1 = 742286254;
long long int var_2 = 6712340943889212774LL;
long long int var_3 = -2818354411222059853LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)55934;
signed char var_8 = (signed char)-126;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 3451022857U;
int var_12 = 1227487266;
unsigned long long int var_13 = 9221013755812552208ULL;
long long int var_16 = 7483730302968764955LL;
unsigned short var_17 = (unsigned short)63980;
signed char var_18 = (signed char)96;
int zero = 0;
long long int var_20 = 4061152544960510951LL;
signed char var_21 = (signed char)125;
unsigned short var_22 = (unsigned short)7707;
signed char var_23 = (signed char)-94;
unsigned short var_24 = (unsigned short)3353;
unsigned short var_25 = (unsigned short)34216;
signed char var_26 = (signed char)100;
_Bool arr_0 [16] [16] ;
_Bool arr_1 [16] ;
int arr_3 [16] [16] ;
unsigned short arr_4 [16] [16] ;
short arr_2 [16] [16] ;
short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1566512356 : -401288778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)9579 : (unsigned short)61584;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-10152;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-11196 : (short)26321;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
