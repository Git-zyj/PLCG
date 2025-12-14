#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 8552697531278108881LL;
unsigned long long int var_4 = 8997284283408034869ULL;
long long int var_5 = -7096163163800077516LL;
long long int var_8 = -3633390710593130729LL;
unsigned short var_9 = (unsigned short)3902;
unsigned short var_10 = (unsigned short)19121;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)103;
unsigned long long int var_14 = 17089022233211183630ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)26696;
signed char var_16 = (signed char)-85;
int var_17 = -1693131477;
long long int var_18 = 167664975336732918LL;
long long int var_19 = -6253254392246683829LL;
int var_20 = -752255826;
short var_21 = (short)-31795;
short arr_1 [25] ;
int arr_2 [25] [25] [25] ;
int arr_3 [25] [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-25117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1824083148 : -574460679;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1009343588 : 2083184831;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 5895860769639195923ULL : 10717635682764534522ULL;
}

void checksum() {
    hash(&seed, var_15);
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
