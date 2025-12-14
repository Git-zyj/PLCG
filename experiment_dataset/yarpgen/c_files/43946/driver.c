#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13384397740593752782ULL;
unsigned short var_1 = (unsigned short)7337;
unsigned int var_2 = 1232472010U;
unsigned short var_3 = (unsigned short)50938;
long long int var_4 = -8664278479122429352LL;
int var_5 = 355334923;
unsigned long long int var_8 = 4065879663920946965ULL;
int var_9 = 1868498764;
long long int var_13 = 5553078305287711970LL;
int zero = 0;
unsigned long long int var_14 = 4205251538172900980ULL;
long long int var_15 = 7580474759114053825LL;
unsigned long long int var_16 = 1671524806814211155ULL;
short var_17 = (short)-10662;
unsigned char var_18 = (unsigned char)104;
int var_19 = -1682307131;
unsigned char var_20 = (unsigned char)103;
int var_21 = -2031937198;
unsigned int var_22 = 4181638048U;
unsigned int var_23 = 2818818744U;
int var_24 = -2132032849;
unsigned short var_25 = (unsigned short)10845;
short arr_2 [12] ;
long long int arr_5 [12] ;
unsigned short arr_9 [19] [19] ;
unsigned long long int arr_12 [19] ;
_Bool arr_14 [19] ;
long long int arr_17 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-23152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -1173816377336925036LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)54223;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 4974040873597153851ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -6199355402525652993LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
